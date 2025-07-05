#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int t;
    std::cin >> t;

    for (int i = 1; i <= t; i++) {
        double l, n, c;
        std::cin >> l >> n >> c;

        if (n == 0 || c == 0) {
            std::cout << "Case " << i << ": " << std::fixed << std::setprecision(10) << 0.0 << '\n';
            continue;
        }

        double lp = (1 + n * c) * l;
        double lo = 0, hi = M_PI;
        double theta;
        for (int j = 0; j < 100; j++) {
            theta = (lo + hi) / 2;
            double r = l / (2 * sin(theta / 2));
            double arc = r * theta;

            if (arc > lp)
                hi = theta;
            else
                lo = theta;
        }

        double r = l / (2 * sin(theta / 2));
        double h = r * (1 - cos(theta / 2));

        std::cout << "Case " << i << ": " << std::fixed << std::setprecision(10) << h << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
