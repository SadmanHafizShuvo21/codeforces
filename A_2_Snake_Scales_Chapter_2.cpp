#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

struct DSU {
    std::vector<int> parent, rank;
    DSU(int n) : parent(n), rank(n, 0) {
        std::iota(parent.begin(), parent.end(), 0);
    }
    int find(int x) {
        return parent[x] == x ? x : parent[x] = find(parent[x]);
    }
    bool unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return false;
        if (rank[a] < rank[b]) std::swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b]) rank[a]++;
        return true;
    }
};

void solve(int t) {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    std::vector<std::array<ll, 3>> edges;
    edges.reserve(2 * n);
    for (int i = 1; i <= n; i++) {
        edges.push_back({a[i], 0, i}); 
    }

    for (int i = 1; i < n; i++) {
        edges.push_back({std::abs(a[i] - a[i + 1]), i, i + 1}); 
    }

    std::sort(edges.begin(), edges.end());
    DSU dsu(n + 1);
    ll ans = 0, cnt = 0;
    for (auto &[w, u, v] : edges) {
        if (dsu.unite(u, v)) {
            ans = std::max(ans, w);
            cnt++;
            if (cnt == n) {
                break;
            }
        }
    }

    std::cout << "Case #" << t << ": " << ans << "\n" << std::flush;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    int t;
    std::cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
}
