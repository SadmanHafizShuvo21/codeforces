// 24 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    
    ll mx = 0;
    for (int i = 0; i < n; i++) {
        ll a, b, c;
        std::cin >> a >> b >> c;
        x -= (b - 1) * a;
        mx = std::max(mx, b * a - c);
    }

    if (x <= 0) {
        std::cout << 0 << "\n";
        return;
    }

    std::cout << (mx == 0 ? -1 : (x + mx - 1) / mx) << "\n";
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