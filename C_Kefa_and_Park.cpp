#include <bits/stdc++.h>
using ll = long long;

const int MAX = 1e5 + 5;
ll n, m, ans;
std::vector<ll> adj[MAX];
bool cat[MAX];

void dfs(ll u, ll p, ll c) {
    c = cat[u] ? c + 1 : 0;
    if (c > m) {
        return;
    }

    bool is_leaf = true;
    for (ll i = 0; i < adj[u].size(); i++) {
        ll v = adj[u][i];
        if (v == p) {
            continue;
        }
        is_leaf = false;
        dfs(v, u, c);
    }

    if (is_leaf) {
        ans++;
    }
}

void solve() {
    std::cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        std::cin >> cat[i];
    }

    for (ll i = 0; i < n - 1; i++) {
        ll u, v;
        std::cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(0, -1, 0);
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
