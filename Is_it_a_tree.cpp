// 20 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;
std::vector<ll> adj[N];
bool vis[N];

void dfs(ll u) {
    vis[u] = true;
    for (auto v : adj[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

void solve() {
    ll n, m;
    std::cin >> n >> m;
    if (m != n - 1) {
        std::cout << "NO" << "\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        adj[i].clear();
        vis[i] = false;
    }

    for (int i = 0; i < m; i++) {
        ll u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            std::cout << "NO" << "\n";
            return;
        }
    }

    std::cout << "YES" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
