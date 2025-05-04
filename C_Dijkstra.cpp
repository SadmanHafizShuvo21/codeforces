#include <bits/stdc++.h>
using ll = long long;
const ll INF = 1e18;
using pii = std::pair<ll, ll>;

// Dijkstra's algorithm
std::pair<std::vector<ll>, std::vector<ll>> dijkstra(ll st, ll n, std::vector<std::vector<pii>> &adj) {
    std::vector<ll> dist(n + 1, INF);
    std::vector<ll> parent(n + 1, -1);
    dist[st] = 0;

    std::priority_queue<pii, std::vector<pii>, std::greater<>> pq;
    pq.emplace(0, st);

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (d > dist[u]) {
            continue;
        }

        for (auto [v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                parent[v] = u;
                pq.emplace(dist[v], v);
            }
        }
    }
    return {dist, parent};
}

void solve() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<pii>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        ll u, v;
        ll w;
        std::cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    auto [dist, parent] = dijkstra(1, n, adj);

    if (dist[n] == INF) {
        std::cout << -1 << '\n';
        return;
    }

    std::vector<int> path;
    for (int v = n; v != -1; v = parent[v]) {
        path.push_back(v);
    }
    std::reverse(path.begin(), path.end());

    for (int v : path) {
        std::cout << v << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
