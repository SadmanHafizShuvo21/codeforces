// 01 April 2026
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll inf = 1e18;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, ll>>> adj(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<ll> dist(n + 1, inf);
    dist[1] = 0;

    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> pq;
    pq.push({0, 1});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d != dist[u]) continue;

        for (auto [v, w] : adj[u]) {
            if (dist[v] > d + w) {
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (dist[i] == inf) cout << -1;
        else cout << dist[i];

        if (i < n) cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}