// 16 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    
    std::map<ll, ll> mp;
    mp[1] = 6;
    mp[2] = 5;
    mp[3] = 4;
    mp[4] = 3;
    mp[5] = 2;
    mp[6] = 1;

    std::vector<std::vector<ll>> dp(n + 1, std::vector<ll>(7, inf));
    for (int v = 1; v <= 6; v++) {
        dp[1][v] = (a[1] != v);
    }

    for (int i = 2; i <= n; i++) {
        for (int v = 1; v <= 6; v++) {
            for (int u = 1; u <= 6; u++) {
                if (v == u || v == mp[u]) {
                    continue;
                }
                dp[i][v] = std::min(dp[i][v], dp[i - 1][u] + (a[i] != v));
            }
        }
    }

    ll ans = inf;
    for (int i = 1; i <= 6; i++) {
        ans = std::min(ans, dp[n][i]);
    }

    std::cout << ans << '\n';
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

