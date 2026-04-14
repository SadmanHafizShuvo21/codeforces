// 14 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll p, q;
    std::cin >> p >> q;
    
    ll n = p + 2 * q;
    for (int i = 1; i * i <= n; i++) {
        if ((n - i) % (2 * i + 1)) {
            continue;
        }
        ll j = (n - i) / (2 * i + 1);
        if (std::abs(i - j) <= p) {
            std::cout << i << " " << j << "\n";
            return;
        }
    }
    std::cout << -1 << "\n";
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