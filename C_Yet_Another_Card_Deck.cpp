// 23 Jan 2026
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

    std::vector<ll> a(n), b(m); 
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (ll i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    std::vector<ll> ans(m);
    for (int i = 0; i < m; i++) {
        auto x = std::find(a.begin(), a.end(), b[i]);
        ans[i] = x - a.begin();
        std::rotate(a.begin(), x, x + 1);
    }
    for (int i = 0; i < m; i++) {
        std::cout << ans[i] + 1 << " \n"[i == m - 1];
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