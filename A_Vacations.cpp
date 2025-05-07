#include <bits/stdc++.h>
using ll = long long;
const int INF = 1e9;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<std::vector<int>> dp(n, std::vector<int>(3, INF));
    dp[0][0] = 1;
    if (a[0] == 1 || a[0] == 3) {
        dp[0][1] = 0;
    }

    if (a[0] == 2 || a[0] == 3) {
        dp[0][2] = 0;
    }

    for (int i = 1; i < n; i++) {
        dp[i][0] = std::min(dp[i-1][0], std::min(dp[i-1][1], dp[i-1][2])) + 1;

        if (a[i] == 1 || a[i] == 3) {
            dp[i][1] = std::min(dp[i-1][0], dp[i-1][2]);
        }

        if (a[i] == 2 || a[i] == 3) {
            dp[i][2] = std::min(dp[i-1][0], dp[i-1][1]);
        }
    }

    ll ans = std::min(dp[n-1][0], std::min(dp[n-1][1], dp[n-1][2]));
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
