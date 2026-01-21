// 20 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    ll x = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        // x ^= a[i];
    }

    std::cout << (n == 1 ? a[0] : (a[0] ^ a[1])) << "\n";
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
