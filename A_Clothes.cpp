#include <bits/stdc++.h>
using ll = long long;
const ll inf = 1E9 + 7;

void solve() {
    int n, m;
    std::cin >> n >> m;
    
    std::vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    std::vector<std::set<int>> adj(n + 1);
    std::vector<std::pair<int, int>> edges;

    for (int i = 0; i < m; i++) {
        int u, v;
        std::cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
        edges.emplace_back(u, v);
    }

    ll ans = inf;
    for (auto [u, v] : edges) {
        for (int w : adj[u]) {
            if (w != v && adj[v].count(w)) {
                ll cost = a[u] + a[v] + a[w];
                ans = std::min(ans, cost);
            }
        }
    }

    std::cout << (ans != inf ? ans : -1) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
