// 15 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k, p, m;
    std::cin >> n >> k >> p >> m;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    if (p > k) {
        std::sort(a.begin(), a.begin() + p - 1);
        for (int i = 0; i < p - k; i++) {
            m -= a[i];
        }
    }

    ll x = a[p - 1];
    a[p - 1] = inf;
    std::sort(a.begin(), a.end());
    ll nd = x;
    for (int i = 0; i < n - k; i++) {
        nd += a[i];
    }
    m -= x;
    std::cout << (m >= 0 ? 1 + m / nd : 0) << "\n";
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