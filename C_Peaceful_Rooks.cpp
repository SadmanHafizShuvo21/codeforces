#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
std::vector<ll> a(N);

ll DSU(ll x) {
    return a[x] == x ? x : DSU(a[x]);
}
void solve() {
    ll n, m;
    std::cin >> n >> m;

    ll ans = m;
    std::iota(a.begin(), a.begin() + n, 0LL);
    while (m--) {
        ll u, v;
        std::cin >> u >> v;
        u--, v--;
        if (u == v) {
            ans--;
            continue;
        }
        if (DSU(u) == DSU(v)) {
            ans++;
        }
        a[DSU(u)] = DSU(v);
    }
    std::cout << ans << "\n";
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
