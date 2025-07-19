#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

using u128 = unsigned __int128;
using i128 = __int128;
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
    
    int size(int x) {
        return siz[find(x)];
    }
};
void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i]--;
    }
    
    DSU fl(n + 1), fr(n + 1);
    
    std::vector<int> cnt(n), p(n);
    for (int i = 0; i < n; i++) {
        cnt[a[i]]++;
    }
    for (int i = 1; i < n; i++) {
        cnt[i] += cnt[i - 1];
    }
    for (int i = 0; i < n; i++) {
        p[--cnt[a[i]]] = i;
    }
    
    int ans = 0;
    
    int min = n;
    
    std::reverse(p.begin(), p.end());
    for (auto i : p) {
        for (int _ = 0; _ < 2; _++) {
            int x = fl.find(i + 1);
            if (x) {
                fl.merge(x - 1, x);
                min = std::min(min, a[x - 1]);
            }
            
            x = fr.find(i);
            if (x < n) {
                fr.merge(x + 1, x);
                min = std::min(min, a[x]);
            }
        }
        ans = std::max(ans, a[i] - min);
    }
    
    std::cout << ans << "\n";
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
