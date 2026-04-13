// 13 April 2026
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
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i] %= m;
    }

    for (int i = 0; i <= n - m; i++) {
        ll cnt = std::count(a.begin() + i, a.begin() + i + m, a[i]);
        
        if (cnt == m) {
            std::cout << "NO" << "\n";
            return;
        }
    }
    std::cout << "YES" << "\n";
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