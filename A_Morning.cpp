// 29 Jan 2026
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

    ll ans = 4, st = 1;
    for (int i = 0; i < 4; i++) {
        ll x = s[i] - '0';
        if (x == 0) {
            x = 10;
        }

        ans += (std::abs(x - st));
        st = x;
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