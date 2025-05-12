#include <bits/stdc++.h>
using ll = long long;

const ll N = 2007;
std::vector<int> tree[N];
ll depth[N];

void dfs(int u, int d) {
    depth[u] = d;
    for (int v : tree[u]) {
        dfs(v, d + 1);
    }
}

void solve() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        tree[i].clear();
        depth[i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        int p;
        std::cin >> p;
        if (p != -1) {
            tree[p].push_back(i);
        }
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        if (depth[i] == 0) {
            dfs(i, 1);
        }
        ans = std::max(ans, depth[i]);
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
