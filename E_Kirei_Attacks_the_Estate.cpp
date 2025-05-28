#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> dp1(n), dp2(n);
    std::vector<std::vector<ll>> adj(n);
    for (int i = 1; i < n; i++) {
        int u, v;
        std::cin >> u >> v;
        u--; 
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    auto dfs = [&](auto &&self, int x, int p) -> void {
        for (int y : adj[x]) {
            if (y == p) {
                continue;
            }
            dp1[y] = a[y] + std::max(0LL, -dp2[x]);
            dp2[y] = a[y] + std::min(0LL, -dp1[x]);
            self(self, y, x);
        }
    };

    dp1[0] = dp2[0] = a[0];
    dfs(dfs, 0, -1);

    for (int i = 0; i < n; i++) {
        std::cout << dp1[i] << " \n"[i == n - 1];
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
