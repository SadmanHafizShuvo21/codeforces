#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 7;
std::vector<int> g[N], tin, low;
std::vector<std::pair<int,int>> ans;
ll n, m, timer;
bool hasBridge;

void dfs(int v, int p) {
    
    tin[v] = low[v] = timer++;
    for (int to : g[v]) {
        if (to == p) continue;
        if (!tin[to]) {
            ans.push_back({v, to});
            dfs(to, v);
            low[v] = std::min(low[v], low[to]);
            if (low[to] > tin[v]) hasBridge = true;
        } else if (tin[to] < tin[v]) {
            ans.push_back({v, to});
            low[v] = std::min(low[v], tin[to]);
        }
    }
}

void solve() {
    std::cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    tin.assign(n + 1, 0);
    low.assign(n + 1, 0);
    timer = 1;
    hasBridge = false;

    dfs(1, -1);

    if (hasBridge) {
        std::cout << 0 << "\n";
        return;
    }

    for (auto &e : ans) {
        std::cout << e.first << " " << e.second << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
