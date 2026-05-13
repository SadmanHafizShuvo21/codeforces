// 06 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;

const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

struct SegTree {
    ll n;
    std::vector<ll> st;

    SegTree(int _n = 0) {
        init(_n);
    }

    void init(int _n) {
        n = _n;
        st.assign(4 * n + 5, 0);
    }

    ll merge(ll a, ll b, bool isMin) {
        if (isMin) return std::min(a, b);
        return std::max(a, b);
    }

    void build(std::vector<ll>& a, int v, int l, int r, bool isMin) {
        if (l == r) {
            st[v] = a[l];
            return;
        }

        ll m = (l + r) / 2;

        build(a, v * 2, l, m, !isMin);
        build(a, v * 2 + 1, m + 1, r, !isMin);

        st[v] = merge(st[v * 2], st[v * 2 + 1], isMin);
    }

    void update(int v, int l, int r, int pos, ll val, bool isMin) {
        if (l == r) {
            st[v] = val;
            return;
        }

        int m = (l + r) / 2;

        if (pos <= m)
            update(v * 2, l, m, pos, val, !isMin);
        else
            update(v * 2 + 1, m + 1, r, pos, val, !isMin);

        st[v] = merge(st[v * 2], st[v * 2 + 1], isMin);
    }
};

void solve() {
    ll n, m;
    std::cin >> n >> m;

    ll sz = 1LL << n;
    std::vector<ll> a(sz + 1);

    for (int i = 1; i <= sz; i++) {
        std::cin >> a[i];
    }

    SegTree seg(sz);

    bool isMin = (n % 2 == 1);

    seg.build(a, 1, 1, sz, isMin);

    while (m--) {
        ll p, b;
        std::cin >> p >> b;

        seg.update(1, 1, sz, p, b, isMin);

        std::cout << seg.st[1] << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}