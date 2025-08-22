#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, q;
    std::cin >> n >> m >> q;
    std::vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    std::sort(a.rbegin(), a.rend());
    std::sort(b.rbegin(), b.rend());
    
    std::vector<ll> pa(n + 1, 0), pb(m + 1, 0);
    for (ll i = 1; i <= n; i++) {
        pa[i] = pa[i - 1] + a[i - 1];
    }
    for (ll i = 1; i <= m; i++) {
        pb[i] = pb[i - 1] + b[i - 1];
    }
    
    for (ll i = 0; i < q; i++) {
        ll x, y, z;
        std::cin >> x >> y >> z;
        ll l = std::max(0LL, z - y);
        ll r = std::min(x, z);
        
        auto ga = [&](ll idx) -> ll { 
            return idx >= n ? 0 : a[idx]; 
        };
        
        auto gb = [&](ll idx) -> ll { 
            return idx >= m ? 0 : b[idx]; 
        };
        
        ll lo = 0, hi = z;
        while (lo < hi) {
            ll md = (lo + hi) / 2;
            if (md == z || ga(md) < gb(z - md - 1)) {
                hi = md;
            }
            else {
                lo = md + 1;
            }
        }
        ll k = std::max(l, std::min(r, lo));
        ll ans = pa[k] + pb[z - k];
        std::cout << ans << "\n";
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
}
