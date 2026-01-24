// 24 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

ll cal(ll n) {
    return n * (n - 1) * (n - 2) / 6;
}

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n + 1, 0);
    for (int i = 0; i < m; i++) {
        ll u, v;
        std::cin >> u >> v;
        u--;
        v--;
        a[u]++;
        a[v]++;
    }

    for (int i = 0; i < n; i++) {
        ll x = n - a[i] - 1;
        std::cout << (x < 3 ? 0 : cal(x)) << " \n"[i == n - 1];
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
