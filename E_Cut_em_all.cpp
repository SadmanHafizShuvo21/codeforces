#include <bits/stdc++.h>
using ll = long long;
std::vector<int> arr;

void dfs(const std::vector<std::vector<ll>>& g, int v, int p) {
    arr[v] = 1;
    for (int u : g[v]) {
        if (u != p) {
            dfs(g, u, v);
            arr[v] += arr[u];
        }
    }
}

void solve() {
    ll n;
    std::cin >> n;

    if (n % 2 != 0) {
        std::cout << -1 << "\n";
        return;
    }

    std::vector<std::vector<ll>> a(n + 1);
    arr.resize(n + 1);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        std::cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    dfs(a, 1, -1);

    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if (arr[i] % 2 == 0) {
            ans++;
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
