#include <bits/stdc++.h>
using ll = long long;

const int MOD = 1000000007;
const int MAXN = 200000;
std::vector<ll> p2;

void prep() {
    p2.resize(MAXN + 1);
    p2[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        p2[i] = (p2[i - 1] * 2) % MOD;
    }
}

void fenw_upd(std::vector<ll> &fenw, int idx, int n) {
    for (; idx <= n; idx += idx & -idx) fenw[idx]++;
}

ll fenw_qry(const std::vector<ll> &fenw, int idx) {
    ll s = 0;
    for (; idx > 0; idx -= idx & -idx) s += fenw[idx];
    return s;
}

ll proc(ll n, std::vector<ll> &a) {
    std::vector<ll> fenwL(n + 1, 0), lCnt(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        lCnt[i] = fenw_qry(fenwL, a[i] - 1);
        fenw_upd(fenwL, a[i], n);
    }

    std::vector<ll> fenwR(n + 1, 0), rCnt(n + 1, 0);
    for (int i = n; i >= 1; i--) {
        rCnt[i] = fenw_qry(fenwR, a[i] - 1);
        fenw_upd(fenwR, a[i], n);
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ll pl = (p2[lCnt[i]] - 1 + MOD) % MOD;
        ll pr = (p2[rCnt[i]] - 1 + MOD) % MOD;
        ans = (ans + pl * pr) % MOD;
    }
    return ans;
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) std::cin >> a[i];
    std::cout << proc(n, a) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    prep();

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
