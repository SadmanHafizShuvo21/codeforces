#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;

//Segment tree teplate
struct SegTree {
    int n;
    std::vector<ll> tree;

    void init(int sz) {
        n = sz;
        tree.assign(4 * n, 0);
    }

    void build(std::vector<ll> &a, int v, int tl, int tr) {
        if (tl == tr) {
            tree[v] = a[tl];
        } 
        else {
            int tm = (tl + tr) / 2;
            build(a, v * 2, tl, tm);
            build(a, v * 2 + 1, tm + 1, tr);
            tree[v] = tree[v * 2] ^ tree[v * 2 + 1];
        }
    }

    void build(std::vector<ll> &a) {
        build(a, 1, 0, n - 1);
    }

    void update(int v, int tl, int tr, int pos, ll val) {
        if (tl == tr) {
            tree[v] = val;
        } 
        else {
            int tm = (tl + tr) / 2;
            if (pos <= tm) {
                update(v * 2, tl, tm, pos, val);
            } 
            else {
                update(v * 2 + 1, tm + 1, tr, pos, val);
            }
            tree[v] = tree[v * 2] ^ tree[v * 2 + 1];
        }
    }

    void update(int pos, ll val) {
        update(1, 0, n - 1, pos, val);
    }

    // XOR on range [l, r]
    ll query(int v, int tl, int tr, int l, int r) {
        if (l > r) {
            return 0;
        }
        if (l == tl && r == tr) {
            return tree[v];
        }
        int tm = (tl + tr) / 2;
        return query(v * 2, tl, tm, l, std::min(r, tm)) ^ query(v * 2 + 1, tm + 1, tr, std::max(l, tm + 1), r);
    }

    ll query(int l, int r) {
        return query(1, 0, n - 1, l, r);
    }
};

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    SegTree seg;
    seg.init(n);
    seg.build(a);

    while(q--) {
        char ch;
        std::cin >> ch;
        if(ch == 'P') {
            int l, r;
            std::cin >> l >> r;
            l--;
            r--;
            ll nim = seg.query(l, r); 
            std::cout << (nim == 0 ? "JUAN" : "FRANK") << "\n";
        } 
        else {
            ll k, x;
            std::cin >> k >> x;
            k--;
            a[k] += x;
            seg.update(k, a[k]);
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
