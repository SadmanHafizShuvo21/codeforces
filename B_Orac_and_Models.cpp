#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1), dp(n + 1, 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    ll ans = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 2 * i; j <= n; j += i) {
            if (a[i] < a[j]) {
                dp[j] = std::max(dp[j], dp[i] + 1);
            }
        }
        ans = std::max(ans, dp[i]);
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
}
