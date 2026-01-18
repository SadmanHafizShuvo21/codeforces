// 17 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll mod = 1e9 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> dp(n + 1, 1);
    for (int i = 2; i <= k; i++) {
        std::vector<ll> dpn(n + 1, 0);
        for (int j = 1; j <= n; j++) {
            for (int k = j; k <= n; k += j) {  
                dpn[k] += dp[j] % mod;
            }
        }
        dp = dpn;
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += dp[i] % mod;
        ans %= mod;
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}