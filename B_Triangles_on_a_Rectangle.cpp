// 02 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll w, h;
    std::cin >> w >> h;

    ll ans = -inf;
    for (int i = 0; i < 4; i++) {
        ll k, l;
        std::cin >> k >> l;
        ll x = (i < 2 ? h : w);
        for (int j = 1; j < k; j++) {
            ll r;
            std::cin >> r;
            ans = std::max(ans, x * (r - l));
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}
