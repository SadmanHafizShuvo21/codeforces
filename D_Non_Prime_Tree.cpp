#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> adj(n);
    for (int i = 1; i < n; i++) {
        int u, v;
        std::cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    std::vector<int> a(n);
    int cur = 1;
    std::function<void(int, int)> dfs = [&](int x, int p) {
        a[x] = cur;
        bool first = true;
        for (auto y : adj[x]) {
            if (y == p) {
                continue;
            }
            if (first) {
                first = false;
                cur++;
                dfs(y, x);
                cur++;
            } else {
                cur += 2;
                dfs(y, x);
            }
        }
    };

    dfs(0, -1);

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " \n"[i == n - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) solve();
}
