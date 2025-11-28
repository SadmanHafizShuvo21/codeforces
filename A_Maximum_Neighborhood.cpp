#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;

    std::vector<std::vector<ll>> grid(n, std::vector<ll>(n));
    ll cnt = 1;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            grid[i][j] = cnt++;
        }
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            ll cost = grid[i][j];
            if (i > 0) {
                cost += grid[i - 1][j];
            }
            if (i + 1 < n) {
                cost += grid[i + 1][j];
            }
            if (j > 0) {
                cost += grid[i][j - 1];
            }
            if (j + 1 < n) {
                cost += grid[i][j + 1];
            }
            ans = std::max(ans, cost);
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}
