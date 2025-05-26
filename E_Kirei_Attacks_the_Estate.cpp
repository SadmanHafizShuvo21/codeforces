#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) std::cin >> a[i];

    std::vector<std::vector<int>> g(n + 1);
    for (int i = 1; i < n; i++) {
        int u, v;
        std::cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    std::vector<ll> even(n + 1), odd(n + 1), ans(n + 1);

    std::function<void(int, int)> dfs = [&](int u, int p) {
        even[u] = a[u];
        odd[u] = -1e18;
        for (int v : g[u]) {
            if (v == p) continue;
            dfs(v, u);
            even[u] = std::max(even[u], a[u] - odd[v]);
            odd[u] = std::max(odd[u], -a[u] + even[v]);
        }
        ans[u] = even[u];
    };

    dfs(1, 0);

    for (int i = 1; i <= n; i++) std::cout << ans[i] << " ";
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) solve();
}
