// 21 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    std::string s;
    std::cin >> s;

    ll n;
    std::cin >> n;
    std::vector<std::string> str(n);
    for (int i = 0; i < n; i++) {
        std::cin >> str[i];
    }

    for (int k = 0; k < 26; k++) {
        std::string t = s;
        for (char &c : t) {
            c = (c - 'a' + k) % 26 + 'a';
        }

        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (t.find(str[i]) == std::string::npos) {
                ok = false;
                break;
            }
        }

        if (ok) {
            std::cout << t << '\n';
            return;
        }
    }
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