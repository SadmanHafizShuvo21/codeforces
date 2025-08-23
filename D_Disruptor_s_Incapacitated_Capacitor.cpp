#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
const int MOD = 1e9 + 7;
const ld PI = acosl(-1.0);

void solve() {
    ld r, l, theta;
    std::cin >> r >> l >> theta;

    ld s = sinl(theta * PI / 360.0L); 
    ld area = 2.0L * r * s;

    std::cout << std::fixed << std::setprecision(6) << (ld)sqrtl(l * l - area * area) << '\n';
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
