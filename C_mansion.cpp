#include<bits/stdc++.h>
using ll = long long;
const ll inf = 1e18;
const int N = 1e5 + 5;
std::vector<std::pair<ll,ll>> adj[N];
std::vector<ll> dist;

void dijkstra(ll src, ll n) {
    dist.assign(n + 1, inf);
    dist[src] = 0;

    std::priority_queue<std::pair<ll, ll>, std::vector<std::pair<ll, ll>>, std::greater<>> pq;
    pq.push({0, src});

    while(!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        
        if(d > dist[u]) {
            continue;
        }

        for(auto [v, w] : adj[u]) {
            if(dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

void solve() {
    ll n, m;
    std::cin >> n >> m;

    for(ll i = 0; i <= n; i++) {
        adj[i].clear();
    }

    for(ll i = 0; i < m; i++) {
        ll u, v, w;
        std::cin >> u >> v >> w;
        adj[u].push_back({v, w}); 
        // adj[v].push_back({u, w});
    }

    dijkstra(1, n);

    std::cout << (dist[n] == inf ? -1 : dist[n]) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}