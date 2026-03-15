// 14 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const lld error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> c(n), p(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> c[i] >> p[i];
    }

    std::vector<lld> dp(n + 1, 0.0);
    for (int i = n - 1; i >= 0; i--) {
        lld a = dp[i + 1];
        lld b = c[i] + (1.0 - p[i] / 100.0) * a;
        dp[i] = std::max(a, b);
    }

    std::cout << std::fixed << std::setprecision(10) << dp[0] << '\n';
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