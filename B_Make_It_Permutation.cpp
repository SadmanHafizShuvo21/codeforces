#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::cout << 2 * n - 1 << "\n";

    std::cout << 1 << " " << 1 << " " << n << "\n";
    for (int i = 2; i <= n; i++) {
        std::cout << i << " " << 1 << " " << i - 1 << "\n";
        std::cout << i << " " << i << " " << n << "\n";
    }
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
