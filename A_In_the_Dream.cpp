#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    auto ok = [](int x, int y){ 
        return std::max(x, y) <= 2 * std::min(x, y) + 2; 
    };
    std::cout << (ok(a, b) && ok(c - a, d - b) ? "YES" : "NO") << "\n";
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
