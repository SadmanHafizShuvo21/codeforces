// 05 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll x, y;
    std::cin >> x >> y;

    if (x > y || (x == 0 && y % 2 == 0)) {
        std::cout << "NO" << "\n";
        return;
    }

    std::cout << "YES" << "\n";
    ll l = 2 * x;
    l += (x + y) % 2;
    for (int i = 2; i <= l; i++) {
        std::cout << i - 1 << " " << i << "\n";
    }
    for (int i = l + 1; i <= x + y; i++) {
        std::cout << l << " " << i << "\n";
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
}