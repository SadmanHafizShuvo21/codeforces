#include <bits/stdc++.h>
using ll = long long;

double height(double x, double y, double w) {
    double h1 = sqrt(x * x - w * w);
    double h2 = sqrt(y * y - w * w);
    return (h1 * h2) / (h1 + h2); 
}

void solve() {
    int t;
    std::cin >> t;

    for (int i = 1; i <= t; i++) {
        double x, y, c;
        std::cin >> x >> y >> c;
        double lo = 0.0, hi = std::min(x, y), mid;
        for (int i = 0; i < 100; i++) {
            mid = (lo + hi) / 2;
            if (height(x, y, mid) >= c)
                lo = mid;
            else
                hi = mid;
        }
        std::cout << "Case " << i << ": " << std::fixed << std::setprecision(12) << lo << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
