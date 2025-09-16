#include <bits/stdc++.h>
using ll = long long;
const ll MOD = 998244353;

void solve() {
    int n; 
    std::cin >> n;
    std::vector<int> a(n+1), b(n+1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        std::cin >> b[i];
    }
    ll dp[2] = {1, 1}, ndp[2];
    for (int i = 2; i <= n; i++) {
        ndp[0] = ndp[1] = 0;
        for (int p = 0; p < 2; p++) {
            for (int c = 0; c < 2; c++) {
                int ap = p ? b[i-1] : a[i-1];
                int bp = p ? a[i-1] : b[i-1];
                int ac = c ? b[i] : a[i];
                int bc = c ? a[i] : b[i];
                if (ap <= ac && bp <= bc)
                    ndp[c] = (ndp[c] + dp[p]) % MOD;
            }
        }
        dp[0] = ndp[0]; dp[1] = ndp[1];
    }
    std::cout << (dp[0] + dp[1]) % MOD << "\n";
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
