#include <bits/stdc++.h>
using ll = long long;

struct segtree {
    ll n;
    std::vector<int> st;
    segtree(int _n = 0) { 
        init(_n); 
    }
    void init(int _n) { 
        n = _n; 
        st.assign(4 * n + 5, 0); 
    }
    void upd(int p, int val) { 
        upd(1, 1, n, p, val); 
    }
    void upd(int node, int l, int r, int p, int val) {
        if (l == r) { 
            st[node] = val; return; 
        }
        int mid = (l + r) >> 1;
        if (p <= mid) {
            upd(node << 1, l, mid, p, val);
        } 
        else {
            upd(node << 1 | 1, mid + 1, r, p, val);
        }
        
        st[node] = std::max(st[node << 1], st[node << 1 | 1]);
    }

    int querymax(int L, int R) { 
        if (L > R) {
            return 0;
        }
        return querymax(1, 1, n, L, R);
    }
    int querymax(int node, int l, int r, int L, int R) {
        if (L > r || R < l) {
            return 0;
        }
        if (L <= l && r <= R) {
            return st[node];
        }

        int mid = (l + r) >> 1;
        return std::max(querymax(node << 1, l, mid, L, R), querymax(node << 1 | 1, mid + 1, r, L, R));
    }
};

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        std::cin >> b[i];
    }

    int mx = 2 * n;
    segtree seg(mx);

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ll pos = seg.querymax(a[i], mx);
        ll l = seg.querymax(b[i], mx);

        ll x = 0;
        if (b[i] == a[i]) {
            x += (ll)(i - pos);
        }

        x += std::min(pos, l);
        ans += x * (ll)(n - i + 1);
        seg.upd(a[i], i);
    }

    std::cout << ans << '\n';
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