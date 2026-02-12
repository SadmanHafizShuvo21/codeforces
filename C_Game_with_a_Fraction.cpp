// 11 Feb 2026
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
    if (q < 3) {
        std::cout << "Alice" << "\n";
        return;
    }
    ll l = (2 * q + 2) / 3;
    std::cout << (l <= p && p <= q - 1 ? "Bob" : "Alice") << "\n";
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
