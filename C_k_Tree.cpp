#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-12L;
const ll N = 1e5 + 6;
const ll mod = 1e9 + 7;
ll dp[N][2];

void solve() {
    ll n, k, d; 
    std::cin >> n >> k >> d;
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k && j <= i; j++) {
            dp[i][1] += dp[i - j][1];
            dp[i][1] %= mod;

            dp[i][j >= d] += dp[i - j][0];
            dp[i][j >= d] %= mod;
        }
    }
    std::cout << dp[n][1] << "\n";
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
