#include <bits/stdc++.h>
using ll = long long;

struct SegTree {
    ll n;
    std::vector<std::pair<ll, ll>> st;
    SegTree(int _n = 0) { 
        init(_n); 
    }
    void init(int _n) {
        n = _n;
        st.assign(4 * n + 5, {LLONG_MAX, 0});
    }

    //Combine minimum value and minimum value count
    std::pair<ll, ll> combine(std::pair<ll, ll> a, std::pair<ll, ll> b) {
        if (a.first < b.first) return a;
        if (b.first < a.first) return b;
        return {a.first, a.second + b.second};
    }

    void build(std::vector<ll> &a, int v, int l, int r) {
        if (l == r) { 
            st[v] = {a[l], 1}; 
            return; 
        }

        ll m = (l + r) / 2;
        build(a, v * 2, l, m);
        build(a, v * 2 + 1, m + 1, r);
        
        st[v] = combine(st[v * 2], st[v * 2 + 1]);
        // st[v] = std::min(st[v * 2] , st[v * 2 + 1]);
        // st[v] = std::max(st[v * 2] , st[v * 2 + 1]);
        // st[v] = st[v * 2] + st[v * 2 + 1];
    }

    std::pair<ll, ll>query(int v, int l, int r, int ql, int qr) {
        if (ql > r || qr < l) {
            return {LLONG_MAX, 0};
            // return LLONG_MAX
            // return LLONG_MIN;
            // return 0;
        }
        if (ql <= l && r <= qr) {
            return st[v];
        }

        ll m = (l + r) / 2;
        auto q1 = query(v * 2, l, m, ql, qr);
        auto q2 = query(v * 2 + 1, m + 1, r, ql, qr);

        return combine(q1, q2);
        // return  std::min(q1, q2);
        // return  std::max(q1, q2);
        // return q1 + q2;
    }

    void update(int v, int l, int r, int pos, ll val) {
        if (l == r) { 
            st[v] = {val, 1}; 
            return; 
        }

        int m = (l + r) / 2;
        if (pos <= m) {
            update(v * 2, l, m, pos, val);
        }
        else {
            update(v * 2 + 1, m + 1, r, pos, val);
        }

        st[v] = combine(st[v * 2], st[v * 2 + 1]);
        // st[v] = std::min(st[v * 2] , st[v * 2 + 1]);
        // st[v] = std::max(st[v * 2] , st[v * 2 + 1]);
        // st[v] = st[v * 2] + st[v * 2 + 1];
    }
};

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n + 1);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    SegTree seg(n);
    seg.build(a, 1, 0, n - 1);

    while (q--) {
        ll type; 
        std::cin >> type;
        if (type == 1) {
            ll pos, val;
            std::cin >> pos >> val;
            seg.update(1, 0, n - 1, pos, val);
        } 
        else {
            int l, r;
            std::cin >> l >> r;

            std::pair<ll, ll> ans = seg.query(1, 0, n - 1, l, r - 1);
            std::cout << ans.first << " " << ans.second << "\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
