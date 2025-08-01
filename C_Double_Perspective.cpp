#include <bits/stdc++.h>
using ll = long long;

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

void solve() {
    int n;
    std::cin >> n;
    
    DSU dsu(2 * n);
    std::vector<int> v;
    for (int i = 0; i < n; i++) {
        int a, b;
        std::cin >> a >> b;
        a--;
        b--;
        if (dsu.merge(a, b)) {
            v.push_back(i + 1);
        }
    }
    
    std::cout << v.size() << "\n";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " \n"[i == v.back() - 1];
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

