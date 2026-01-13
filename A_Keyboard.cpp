#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    std::string s, ans, str = {"qwertyuiopasdfghjkl;zxcvbnm,./"};
    char ch;
    std::cin >> ch >> s;
    ll add = (ch == 'R' ? 1 : -1);
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < str.size(); j++) {
            if (s[i] == str[j + add]) {
                ans.push_back(str[j]);
                break;
            }
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}


