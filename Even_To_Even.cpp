#include <bits/stdc++.h>
using ll = long long;
const ll N = 2*10e5 + 7;
std::vector<int> dist(N + 1, -1);
std::vector<int> parent(N + 1, -1);

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::vector<ll>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        ll u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int l, r;
    std::cin >> l >> r;
    std::queue<ll> q;

    dist[l] = 0;
    q.push(l);

    while (!q.empty()) {
        ll u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (v % 2 != 0) {
                continue; 
            }

            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    if (dist[r] == -1) {
        std::cout << "NO" << "\n";
        return;
    } 
    
    std::cout << "YES" << "\n";
    std::vector<ll> path;
    ll cur = r;
    while (cur != -1) {
        path.push_back(cur);
        cur = parent[cur];
    }
    std::reverse(path.begin(), path.end());
    for (int i = 0; i < path.size(); i++) {
        std::cout << path[i] << " \n"[i == path.size() - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
