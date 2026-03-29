// 29 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

struct DSU {
    std::vector<int> f, siz;
    
    DSU() {}
    DSU(int n) { 
        init(n); 
    }
    
    void init(int n) {
        f.resize(n);
        std::iota(f.begin(), f.end(), 0);
        siz.assign(n, 1);
    }
    
    int find(int x) {
        while (x != f[x]) {
            x = f[x] = f[f[x]];
        }
        return x;
    }
    
    bool same(int x, int y) {
        return find(x) == find(y);
    }
    
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
    
    void erase(int x) {
        f[x] = find(x + 1);
    }

    int size(int x) {
        return siz[find(x)];
    }
};

void solve() {
    int n, q;
    std::cin >> n >> q;

    std::vector<std::string> s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }

    std::unordered_map<std::string, int> id;
    for (int i = 0; i < n; i++) {
        id[s[i]] = i;
    }

    DSU dsu(n);
    std::vector<int> last(26, -1);
    for (int i = 0; i < n; i++) {
        std::vector<bool> used(26, false);
        for (char c : s[i]) {
            int x = c - 'a';
            if (used[x]) {
                continue; 
            }

            used[x] = true;
            if (last[x] != -1) {
                dsu.merge(i, last[x]);
            }
            last[x] = i;
        }
    }

    while (q--) {
        std::string a, b;
        std::cin >> a >> b;
        std::cout << (dsu.same(id[a], id[b]) ? "LUA" : "RYEI") << "\n";
    }
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