#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), c(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> c[i];
    }
    ll sum = std::accumulate(c.begin(), c.end(), 0LL);

    ll ans = 0;
    std::vector<ll> dp(n, 0);
    for (int i = 0; i < n; i++) {
        dp[i] = c[i];

        ll mx = 0;
        for (int j = 0; j < i; j++) {
            if (a[j] <= a[i]) {
                mx = std::max(mx, dp[j]);
            }
        }

        dp[i] += mx;
        ans = std::max(ans, dp[i]);
    }

    std::cout << sum - ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
