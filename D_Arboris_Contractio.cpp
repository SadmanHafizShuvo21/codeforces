#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    std::vector<int> deg(n + 1);
    for (int i = 1; i <= n; i++) {
        deg[i] = adj[i].size();
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (deg[i] == 1) {
            ans++;
        }
    }
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int u : adj[i]) {
            if (deg[u] == 1) {
                cnt++;
            }
        }
        int add = (deg[i] == 1 ? 1 : 0);
        mx = std::max(mx, cnt + add);
    }

    std::cout << ans - mx << "\n";
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