#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll x, k;
    std::cin >> x >> k;
    if (x % k) {
        std::cout << 1 << "\n";
        std::cout << x << "\n";
        return;
    }
    std::cout << 2 << "\n";
    std::cout << x - k - 1 << " " << k + 1 << "\n";
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
