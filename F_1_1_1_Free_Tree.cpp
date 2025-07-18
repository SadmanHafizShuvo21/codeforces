#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, q;
    std::cin >> n >> q;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<std::vector<std::pair<int, int>>> adj(n);
    for (int i = 1; i < n; i++) {
        int u, v, c;
        std::cin >> u >> v >> c;
        u--; v--;
        adj[u].emplace_back(v, c);
        adj[v].emplace_back(u, c);
    }
    
    std::vector<int> p(n, -1), w(n);
    std::vector<ll> sum(n);
    std::vector<std::map<int, ll>> ch(n);
    
    ll ans = 0;
    std::function<void(int)> dfs = [&](int x) {
        for (auto [y, wi] : adj[x]) {
            if (y == p[x]) continue;
            p[y] = x;
            w[y] = wi;
            dfs(y);
        }
    };
    dfs(0);
    
    for (int i = 1; i < n; i++) {
        if (a[i] != a[p[i]]) ans += w[i];
        sum[p[i]] += w[i];
        ch[p[i]][a[i]] += w[i];
    }
    
    while (q--) {
        int v, x;
        std::cin >> v >> x;
        v--;
        
        ans -= sum[v];
        if (ch[v].count(a[v])) ans += ch[v][a[v]];
        
        if (v) {
            if (a[v] != a[p[v]]) ans -= w[v];
            if ((ch[p[v]][a[v]] -= w[v]) == 0) ch[p[v]].erase(a[v]);
        }
        
        a[v] = x;
        
        if (v) {
            if (a[v] != a[p[v]]) ans += w[v];
            ch[p[v]][a[v]] += w[v];
        }
        
        ans += sum[v];
        if (ch[v].count(a[v])) ans -= ch[v][a[v]];
        
        std::cout << ans << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
