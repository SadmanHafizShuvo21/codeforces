// 24 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, a, b, c;
    std::cin >> n >> a >> b;

    if (b > a) {
        std::swap(a, b);
    }

    ll x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        ll k;
        std::cin >> k;
        x += (a >= k);
        y += (b >= k);
    }
    std::cout << std::min(x / 2, y) << "\n";
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