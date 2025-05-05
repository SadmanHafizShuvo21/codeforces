#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    if (n == 1) {
        std::cout << 1 <<"\n";
        return;
    }

    if (n == 2) {
        std::cout << -1 <<"\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x = (j - i + n) % n;
            std::cout << x * n + i + 1 << " \n"[j == n - 1];
        }
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
