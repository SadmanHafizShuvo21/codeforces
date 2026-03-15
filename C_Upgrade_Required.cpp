// 15 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

// Disjoint Set Union (Union-Find)
struct DSU {
    std::vector<int> f, siz;
    
    DSU() {}
    DSU(int n) { 
        init(n); 
    }
    
    // initialize n nodes (each node is its own parent)
    void init(int n) {
        f.resize(n);
        std::iota(f.begin(), f.end(), 0);
        siz.assign(n, 1);
    }
    
    // find leader of set containing x (path compression)
    int find(int x) {
        while (x != f[x]) {
            x = f[x] = f[f[x]];
        }
        return x;
    }
    
    // check if x and y are in the same set
    bool same(int x, int y) {
        return find(x) == find(y);
    }
    
    // merge sets of x and y
    bool merge(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return false;
        siz[x] += siz[y];
        f[y] = x;
        return true;
    }
    
    // remove x by linking it to the next element
    void erase(int x) {
        f[x] = find(x + 1);
    }

    // size of the set containing x
    int size(int x) {
        return siz[find(x)];
    }
};


void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> cnt(n, 1);

    DSU dsu(n + 2);
    while(q--) {
        ll x, y;
        std::cin >> x >> y;
        
        ll ans = 0;
        ll v = dsu.find(1);
        while(x >= v) {
            ans += cnt[v];
            cnt[y] += cnt[v];
            cnt[v] = 0;

            dsu.erase(v);
            v = dsu.find(v);
        }
        std::cout << ans << "\n";
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