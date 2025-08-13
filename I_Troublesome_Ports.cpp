#include <bits/stdc++.h>
using ll = long long;

std::vector<ll> bfs(ll n, const std::vector<std::vector<ll>> &edges) {
    std::vector<ll> dist(n + 1, -1);
    std::queue<ll> q;

    for (int i = 1; i <= n; i++) {
        for (int z : edges[i]) {
            if (dist[z] == -1) {
                dist[z] = 1;
                q.push(z);
            }
        }
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : edges[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist;
}

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::vector<ll>> edges(n + 1);

    for (int i = 0; i < m; i++) {
        ll t, x, y;
        std::cin >> t >> x >> y;

        ll temp;
        if (t == 1) {
            temp = x + y - 1;
        } 
        else {
            temp = 1LL * x * y - 1;
        }

        ll val = temp % n;
        if (val < 0) {
            val += n;
        }    

        edges[x].push_back(val + 1);
    }

    std::vector<ll> dist = bfs(n, edges);

    for (int i = 1; i <= n; i++) {
        std::cout << dist[i] << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
