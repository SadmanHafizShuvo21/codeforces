// 22 Jan 2026
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
    
    int size(int x) {
        return siz[find(x)];
    }
};

void solve() {
    ll n;
    std::cin >> n;

    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<std::pair<ll, ll>> pr;
    for (int i = 0; i < n - 1; i++) {
        pr.push_back({std::abs(a[i] - a[i + 1]), i});
    }
    std::sort(pr.begin(), pr.end());

    DSU dsu(n);

    ll cur = 0, l = pr.size() - 1;
    std::vector<ll> ans(n);
    for (int i = n - 1; i >= 1; i--) {
        while (l >= 0 && pr[l].first >= i) {
            ll pos = pr[l].second, u = dsu.find(pos), v = dsu.find(pos + 1);
            if (u == v) {
                l--;
                continue;
            }

            ll a = dsu.siz[u], b = dsu.siz[v];
            cur -= a * (a - 1) / 2;
            cur -= b * (b - 1) / 2;

            dsu.merge(u, v);
            ll c = dsu.siz[dsu.find(u)];
            cur += c * (c - 1) / 2;
            l--;
        }
        ans[i] = cur;
    }

    for (int i = 1; i < n; i++) {
        std::cout << ans[i] << " \n"[i == n - 1];
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
    // solve();
}
