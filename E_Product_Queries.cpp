// 7 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    
    std::vector<ll> a(n + 1);
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        a[x]++;
    }
    
    std::vector<ll> dp(n + 1, inf);
    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        if (!a[i]) {
            continue;
        }
        for (int j = 1; i * j <= n; j++) {
            dp[i * j] = std::min(dp[i * j], dp[j] + 1);
        }
    }

    dp[1] = 1 + (!a[1] ? n : 0);
    for (int i = 1; i <= n; i++) {
        std::cout << (dp[i] > n ? -1 : dp[i]) << " \n"[i == n];
    }
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
