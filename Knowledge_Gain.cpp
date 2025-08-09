#include <bits/stdc++.h>
using ll = long long;
const int MX = 8192, INF = 1e9;

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<int> dp(MX, INF);
    dp[0] = 0;
    for (int v : a) {
        std::vector<int> ndp(dp);
        for (int x = 0; x < MX; x++) {
            if (dp[x] != INF) {
                ndp[x ^ v] = std::min(ndp[x ^ v], dp[x] + 1);
            }
        }
        dp.swap(ndp);
    }
    int ans = INF;
    for (int x = k; x < MX; x++) {
        ans = std::min(ans, dp[x]);
    }
    std::cout << (ans == INF ? -1 : ans) << "\n";
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
