#include <bits/stdc++.h>
using i64 = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i]--;
    }
    
    std::string ans(n, '0');
    std::vector<std::vector<int>> adj(n);
    for (int i = 1; i < n; i++) {
        int u, v;
        std::cin >> u >> v;
        u--;
        v--;
        if (a[u] == a[v]) {
            ans[a[u]] = '1';
        }
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    std::vector<int> vis(n, -1);
    for (int i = 0; i < n; i++) {
        for (auto x : adj[i]) {
            int v = a[x];
            if (vis[v] == i) {
                ans[v] = '1';
            }
            vis[v] = i;
        }
    }
    
    std::cout << ans << "\n";
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