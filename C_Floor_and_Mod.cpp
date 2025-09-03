#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll x, y;
    std::cin >> x >> y;

    ll ans = 0;
    for (int i = 1; i * (i + 1) <= x and i < y; i++) {
        ll r = std::min(y, x / i - 1);
        ans += std::max(0LL, r - i);
    }
    
    std::cout << ans << "\n";
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