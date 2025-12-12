#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const int MOD = 998244353; 
const int N = 2e5 + 7;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    std::vector<std::vector<int>> in(n + 1);
    std::vector<std::pair<int,int>> edges;
    edges.reserve(m);
    for (int i = 0; i < m; i++) {
        int u, v;
        std::cin >> u >> v;
        edges.emplace_back(u, v);
        in[v].push_back(u);
    }

    std::vector<int> idx(m);
    std::iota(idx.begin(), idx.end(), 0);
    std::sort(idx.begin(), idx.end(), [&](int i, int j){
        int vi = edges[i].second, vj = edges[j].second;
        if (a[vi] != a[vj]) return a[vi] < a[vj];
        if (edges[i].first != edges[j].first) return edges[i].first < edges[j].first;
        return vi < vj;
    });

    ll ans = 0;
    std::vector<std::unordered_map<ll, ll>> mp(n + 1);
    mp.reserve(n + 1);
    for (int id : idx) {
        int u = edges[id].first;
        int v = edges[id].second;

        ll ext = 0;
        if (a[v] >= a[u]) {
            ll need = a[v] - a[u];
            auto it = mp[u].find(need);
            if (it != mp[u].end()) {
                ext = it->second;
            }
        }

        ll dp = (ext + 1) % MOD;
        ans = (ans + dp) % MOD;

        mp[v][a[u]] = (mp[v][a[u]] + dp) % MOD;
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
