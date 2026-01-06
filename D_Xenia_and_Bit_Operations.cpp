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

    void build(std::vector<ll>& a, int v, int l, int r, bool ok) {
        if (l == r) {
            st[v] = a[l];
            return;
        }

        ll m = (l + r) / 2;
        build(a, v * 2, l, m, !ok);
        build(a, v * 2 + 1, m + 1, r, !ok);

        if (ok) {
            st[v] = st[v * 2] | st[v * 2 + 1];
        }
        else {
            st[v] = st[v * 2] ^ st[v * 2 + 1];
        }
        // st[v] = std::min(st[v * 2], st[v * 2 + 1]);
        // st[v] = std::max(st[v * 2], st[v * 2 + 1]);
        // st[v] = st[v * 2] + st[v * 2 + 1];
    }

    void update(int v, int l, int r, int pos, ll val, bool ok) {
        if (l == r) {
            st[v] = val;
            return;
        }

        int m = (l + r) / 2;
        if (pos <= m) {
            update(v * 2, l, m, pos, val, !ok);
        }
        else {
            update(v * 2 + 1, m + 1, r, pos, val, !ok);
        }

        if (ok) {
            st[v] = st[v * 2] | st[v * 2 + 1];
        }
        else {
            st[v] = st[v * 2] ^ st[v * 2 + 1];
        }

        // st[v] = std::min(st[v * 2], st[v * 2 + 1]);
        // st[v] = std::max(st[v * 2], st[v * 2 + 1]);
        // st[v] = st[v * 2] + st[v * 2 + 1];
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
    bool ok = (n % 2 == 1);
    seg.build(a, 1, 1, sz, ok);

    while (m--) {
        ll p, b;
        std::cin >> p >> b;
        seg.update(1, 1, sz, p, b, ok);
        std::cout << seg.st[1] << "\n";
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
