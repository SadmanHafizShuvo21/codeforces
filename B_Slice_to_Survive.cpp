#include <bits/stdc++.h>

void solve() {
    int n, m, a, b;
    std::cin >> n >> m >> a >> b;
    int vert = std::min(a - 1, n - a);
    int hori = std::min(b - 1, m - b);
    std::cout << std::max(vert, hori) << '\n';
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
