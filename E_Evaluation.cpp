// 29 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    std::vector<std::string> s(8);
    for (int i = 0; i < 8; i++) {
        std::cin >> s[i];
    }

    std::string str;
    for (int i = 0; i < 8; i++) {
        ll cnt = 0;
        for (int j = 0; j < 8; j++) {
            if (s[i][j] == '.') {
                cnt++;
            } 
            else {
                if (cnt > 0) {
                    str += std::to_string(cnt);
                    cnt = 0;
                }
                str += s[i][j];
            }
        }

        if (cnt > 0) {
            str += std::to_string(cnt);
        }

        str += (i != 7 ? '/':' ');
    }

    std::cout << str << '\n';
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