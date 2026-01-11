// 11 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::string s, str;
    std::cin >> n >> s;

    std::reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            std::string x = s.substr(i + 1, 2);
            std::reverse(x.begin(), x.end());
            ll val = stoi(x);
            str.push_back('a' + val - 1);
            i += 2;
        }
        else {
            str.push_back('a' + (s[i] - '0' - 1));
        }
    }

    std::reverse(str.begin(), str.end());
    std::cout << str << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}

















