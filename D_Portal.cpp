// 27 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, x, y;
    std::cin >> n >> x >> y;

    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll idx = x;
    for (int i = x + 1; i < y; i++) {
        if (a[i] < a[idx]) {
            idx = i;
        }
    }

    std::vector<ll> r;
    for (int i = idx; i < y; i++) {
        r.push_back(a[i]);
    }
    for (int i = x; i < idx; i++) {
        r.push_back(a[i]);
    }

    std::vector<ll> f;
    for (int i = 0; i < x; i++) {
        f.push_back(a[i]);
    }
    for (int i = y; i < n; i++) {
        f.push_back(a[i]);
    }

    ll i = 0;
    bool ok = false;
    std::vector<ll> ans;
    while(i < (ll)f.size()) {
        if (!ok && !r.empty() && r[0] < f[i]) {
            for (int v : r) {
                ans.push_back(v);
            }
            ok = true;
        }
        else {
            ans.push_back(f[i]);
            i++;
        }
    }

    if (!ok) {
        for (int v : r) {
            ans.push_back(v);
        }
    }

    for (int in = 0; in < n; in++) {
        std::cout << ans[in] << " \n"[in == n - 1];
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