#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
    }
    std::vector<int> d(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> d[i];
    }

    std::vector<int> cycle_id(n + 1, 0);
    std::vector<int> cycle_size(n + 1, 0);
    std::vector<bool> vis(n + 1, false);
    int cur_cycle = 0;
    for (int v = 1; v <= n; ++v) {
        if (!vis[v]) {
            cur_cycle++;
            int cur = v;
            std::vector<int> nodes;
            while (!vis[cur]) {
                vis[cur] = true;
                nodes.push_back(cur);
                cur = p[cur - 1];
            }
            int sz = nodes.size();
            for (int node : nodes) {
                cycle_id[node] = cur_cycle;
                cycle_size[node] = sz;
            }
        }
    }

    std::vector<bool> added(cur_cycle + 1, false);
    int sum = 0;
    std::vector<int> ans;
    for (int di : d) {
        int idx = di - 1;
        int val = p[idx];
        int cid = cycle_id[val];
        if (!added[cid]) {
            sum += cycle_size[val];
            added[cid] = true;
        }
        ans.push_back(sum);
    }
    
    for (int i = 0; i < n; ++i) {
        std::cout << ans[i] << " \n"[i == n - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
