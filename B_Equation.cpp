#include <bits/stdc++.h>
using ll = double;
const ll inf = 1e-9;

void solve() {
    ll a, b, c;
    std::cin >> a >> b >> c;

    // 1st part: Handle linear and degenerate cases
    if (std::fabs(a) < inf) {
        if (std::fabs(b) < inf) {
            std::cout << (std::fabs(c) < inf ? -1 : 0) << "\n";
        }
        else {
            ll x = -c / b;
            std::cout << 1 << "\n";
            std::cout << std::fixed << std::setprecision(10) << x << "\n";
        }
        return;
    }

    // 2nd part: Quadratic case
    ll d = b * b - 4 * a * c;
    if (d < -inf) {
        std::cout << 0 << "\n";
        return;
    }

    if (std::fabs(d) < inf) {
        ll x = -b / (2 * a);
        std::cout << 1 << "\n";
        std::cout << std::fixed << std::setprecision(10) << x << "\n";
        return;
    }

    ll x = std::sqrt(d);
    ll r1 = (-b - x) / (2 * a);
    ll r2 = (-b + x) / (2 * a);

    if (r1 > r2) {
        std::swap(r1, r2);
    }

    std::cout << 2 << "\n";
    std::cout << std::fixed << std::setprecision(10) << r1 << "\n";
    std::cout << std::fixed << std::setprecision(10) << r2 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}