// 25 Jan 2026
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
 
    void build(std::vector<ll>& a, int v, int l, int r) {
        if (l == r) {
            st[v] = a[l];
            return;
        }
 
        ll m = (l + r) / 2;
        build(a, v * 2, l, m);
        build(a, v * 2 + 1, m + 1, r);
 
        // if (ok) {
        //     st[v] = st[v * 2] | st[v * 2 + 1];
        // }
        // else {
        //     st[v] = st[v * 2] ^ st[v * 2 + 1];
        // }
        // st[v] = std::min(st[v * 2], st[v * 2 + 1]);
        // st[v] = std::max(st[v * 2], st[v * 2 + 1]);
        st[v] = st[v * 2] + st[v * 2 + 1];
    }
 
    ll query(int v, int l, int r, int ql, int qr) {
        if (ql > r || qr < l) {
            // return LLONG_MAX;
            // return LLONG_MIN;
            return 0;
        }
        if (ql <= l && r <= qr) {
            return st[v];
        }

        ll m = (l + r) / 2;
        ll q1 = query(v * 2, l, m, ql, qr);
        ll q2 = query(v * 2 + 1, m + 1, r, ql, qr);

        // return  std::min(q1, q2);
        // return  std::max(q1, q2);
        return q1 + q2;
    }

    void update(int v, int l, int r, int pos, ll val) {
        if (l == r) {
            st[v] = val;
            return;
        }
 
        int m = (l + r) / 2;
        if (pos <= m) {
            update(v * 2, l, m, pos, val);
        }
        else {
            update(v * 2 + 1, m + 1, r, pos, val);
        }
 
        // if (ok) {
        //     st[v] = st[v * 2] | st[v * 2 + 1];
        // }
        // else {
        //     st[v] = st[v * 2] ^ st[v * 2 + 1];
        // }
 
        // st[v] = std::min(st[v * 2], st[v * 2 + 1]);
        // st[v] = std::max(st[v * 2], st[v * 2 + 1]);
        st[v] = st[v * 2] + st[v * 2 + 1];
    }
};

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    SegTree seg(n);
    seg.build(a, 1, 1, n);
    while (m--) {
        ll t;
        std::cin >> t;

        if (t == 1) {
            ll x;
            std::cin >> x;
            std::swap(a[x], a[x + 1]);
            seg.update(1, 1, n, x, a[x]);
            seg.update(1, 1, n, x + 1, a[x + 1]);
        }
        else {
            ll l, r;
            std::cin >> l >> r;
            std::cout << seg.query(1, 1, n, l, r) << "\n";
        }
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
