#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int a, x, y;
    std::cin >> a >> x >> y;
    
    std::cout << ((std::min(x, y) > a || std::max(x, y) < a) ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t; std::cin >> t;
    while (t--) {
        solve();
    }
}
