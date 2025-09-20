#include <bits/stdc++.h>
using ll = long long;
std::vector<bool> vis;
ll cur;

void dfs(std::vector<std::vector<ll>> &adj, std::vector<ll> &a, ll src) {
    vis[src] = true;
    cur = std::min(cur, a[src]);
    for (auto child : adj[src]) {
        if (!vis[child]) {
            dfs(adj, a, child);
        }
    }
}

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<std::vector<ll>> adj(n);
    for (int i = 0; i < q; i++) {
        ll u, v;
        std::cin >> u >> v;
        u--, 
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vis.assign(n, false);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            cur = LLONG_MAX;
            dfs(adj, a, i);
            ans += cur;
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
