#include <bits/stdc++.h>
using ll = long long;
using lld = long double;

void solve(int t) {
    ll n;
    std::cin >> n;
    lld l = 0.0;
    lld r = std::numeric_limits<lld>::infinity();
    for (ll i = 1; i <= n; i++) {
        ll a, b;
        std::cin >> a >> b;
        l = std::max(l, (lld)i / (lld)b);
        if (a > 0) {
            r = std::min(r, (lld)i / (lld)a);
        }
    }
    std::cout << "Case #" << t << ": " << std::fixed << std::setprecision(10) << (l <= r ? l : -1) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        solve(i + 1);
    }
    return 0;
}
