#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;
const ll inf = 1e9 + 7;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::vector<ll>> a(n, std::vector<ll>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }

    ll ans = -inf;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ll x = 0;
            for (int k = 0; k < n; k++) {
                ll d = std::abs(i - k);

                x += (j >= d ? a[k][j - d] : 0);
                x += (j + d < m ? a[k][j + d] : 0);
            }
            
            x -= a[i][j];
            ans = std::max(ans, x);
        }
    }
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
