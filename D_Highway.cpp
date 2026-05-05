// 05 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;

// Disjoint Set Union (DSU)
struct DSU {
    std::vector<int> f, siz;
    
    DSU() {}
    DSU(int n) {
        init(n);
    }
    
    // Initializes DSU for n elements
    void init(int n) {
        f.resize(n);
        std::iota(f.begin(), f.end(), 0);
        siz.assign(n, 1);
    }
    
    // Returns root/leader of the set x belongs to
    int find(int x) {
        while (x != f[x]) {
            x = f[x] = f[f[x]];
        }
        return x;
    }
    
    // Checks if x and y are in the same component.
    bool same(int x, int y) {
        return find(x) == find(y);
    }
    
    // Merges the sets that x and y belong to. Returns false if already same.
    bool merge(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) {
            return false;
        }
        siz[x] += siz[y];
        f[y] = x;
        return true;
    }
    
    int size(int x) {
        return siz[find(x)];
    }
};

struct Edge {
    ll u, v;
    ll w;
};

void solve() {
    ll n, m, j;
    std::cin >> n >> m >> j;
    j--; 

    std::vector<Edge> edges(m);
    for (int i = 0; i < m; i++) {
        std::cin >> edges[i].u >> edges[i].v >> edges[i].w;
        edges[i].u--; 
        edges[i].v--;
    }

    DSU dsu(n);

    ll ans = 0;
    ans += edges[j].w;
    dsu.merge(edges[j].u, edges[j].v);

    std::vector<Edge> sorted = edges;
    std::sort(sorted.begin(), sorted.end(), [](auto &a, auto &b) {
        return a.w < b.w;
    });

    for (auto &e : sorted) {
        if (dsu.merge(e.u, e.v)) {
            ans += e.w;
        }
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}