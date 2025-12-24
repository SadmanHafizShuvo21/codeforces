#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    ll ans = 0;
    for (int i = 0; i < n - 1; i++) {   
        ans += std::abs(a[i] - a[i+1]);
    }

    ll best = std::max(std::abs(a[0] - a[1]), std::abs(a[n-1] - a[n-2]));
    for (int i = 1; i < n - 1; i++) {   
        ll x = std::abs(a[i-1] - a[i]) + std::abs(a[i] - a[i+1]) - std::abs(a[i-1] - a[i+1]);
        best = std::max(best, x);
    }

    std::cout << ans - best << "\n";
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
