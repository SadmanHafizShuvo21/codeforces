#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int t;
    std::cin >> t;

    for (int i = 1; i <= t; i++) {
        double a, b, c, r;
        std::cin >> a >> b >> c >> r;

        double r1 = std::sqrt(r / (1 + r));
        double x = a * r1;

        std::cout << "Case " << i << ": " << std::fixed << std::setprecision(10) << x << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}