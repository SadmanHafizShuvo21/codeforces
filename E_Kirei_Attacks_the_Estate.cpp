#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    std::vector<std::vector<int>> g(n + 1);
    for (int i = 1; i < n; i++) {
        int u, v;
        std::cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    std::vector<ll> dp_even(n + 1), dp_odd(n + 1);

    std::function<void(int, int)> dfs = [&](int u, int p) {
        dp_even[u] = a[u];
        dp_odd[u] = -a[u];
        for (int v : g[u]) {
            if (v == p) continue;
            dfs(v, u);
            dp_even[u] = std::max(dp_even[u], a[u] - dp_odd[v]);
            dp_odd[u] = std::max(dp_odd[u], -a[u] + dp_even[v]);
        }
    };

    dfs(1, 0);

    for (int i = 1; i <= n; i++) {
        std::cout << std::max(dp_even[i],dp_odd[i]) << " \n"[i == n];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) solve();
}
