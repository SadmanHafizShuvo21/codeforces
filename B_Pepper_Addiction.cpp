// 07 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(m);
    for (int i = 0; i < m; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> d(m, 0);
    for (int i = 0; i < n; i++) {
        ll x, y;
        std::cin >> x >> y;
        x--;
        d[x] += y;
    }

    ll ans = 0;
    for (int i = 0; i < m; i++) {
        ans += std::min(a[i], d[i]);
    }
    std::cout << ans << "\n";
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