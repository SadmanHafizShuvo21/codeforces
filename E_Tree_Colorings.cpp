#include <bits/stdc++.h>
using ll = long long;

constexpr int M = 5E5;
constexpr int inf = 1E9;
std::vector<int> dp(M + 1, inf);

void precompute() {
    dp[1] = 1;
    
    for (int i = 1; i <= M; i++) {
        for (int j = 1; (i + 2) * j <= M; j++) {
            dp[(i + 2) * j] = std::min(dp[(i + 2) * j], dp[i] + dp[j]);
        }
    }
}

void solve() {
    ll m;
    std::cin >> m;
    std::cout << (dp[m] != inf ? dp[m] : -1) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    precompute();
    
    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}