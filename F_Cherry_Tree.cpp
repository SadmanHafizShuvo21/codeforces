#include <bits/stdc++.h>
using ll = long long;
const int N = 2e5 + 7;

std::vector<int> g[N];

// returns set of achievable remainders mod 3 for subtree v
std::bitset<3> dfs(int v, int p) {
    bool leaf = true;
    std::bitset<3> cur; 
    cur[0] = 1; // start with 0 shakes

    for (int u : g[v]) {
        if (u == p) continue;
        leaf = false;
        auto ch = dfs(u, v);
        std::bitset<3> nxt;
        for (int i = 0; i < 3; i++) if (cur[i]) 
            for (int j = 0; j < 3; j++) if (ch[j]) 
                nxt[(i + j) % 3] = 1;
        cur = nxt;
    }

    if (leaf) return std::bitset<3>("010"); // leaf: only remainder 1 possible
    cur[1] = 1; // option: shake this node
    return cur;
}

void solve() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) g[i].clear();
    for (int i = 0; i < n-1; i++) {
        int u,v;
        std::cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    auto res = dfs(1,0);
    if (res[0]) std::cout << "YES\n";
    else std::cout << "NO\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while(t--) solve();
}
