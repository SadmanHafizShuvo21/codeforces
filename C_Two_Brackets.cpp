#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    std::string s;
    std::cin >> s;

    ll ans = 0, a = 0, b = 0;
    for (auto c : s) {
        if (c == '(') {
            a++;
        }
        else if (c == ')') {
            if (a > 0) {
                a--;
                ans++;
            }
        }
        else if (c == '[') {
            b++;
        }
        else if (c == ']') {
            if (b > 0) {
                b--;
                ans++;
            }
        }
        if (a < 0 || b < 0) {
            break;
        }
    }
    std::cout << ans << "\n";
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
