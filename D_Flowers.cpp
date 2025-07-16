#include <bits/stdc++.h>
using ll = long long;
const ll mod = 1e9 + 7;
const ll mx = 1e5 + 2;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    
    std::vector<ll>dp(mx, 1), prefix(mx, 0);
    for (int i = 1; i < mx; i++) {
        dp[i] = dp[i - 1];
        if (i >= k) {
            dp[i] = (dp[i] + dp[i - k]) % mod;
        }
    }

    for (int i = 1; i < mx; i++) {
        prefix[i] = (prefix[i - 1] + dp[i]) % mod;
    }

    while (n--) {
        ll a, b;
        std::cin >> a >> b;
        ll ans = prefix[b] - (a > 0 ? prefix[a - 1] : 0);
        if (ans < 0) {
            ans += mod;
        }

        std::cout << ans << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(nullptr);

    solve();
}