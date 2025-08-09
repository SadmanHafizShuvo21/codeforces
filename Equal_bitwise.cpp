#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int x, y;
    std::cin >> x >> y;
    if (x < y) {
        std::swap(x, y);
    }
    std::cout << x - y << "\n";
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
