#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;

void solve() {
    lld r, x, y, x1, y1;
    std::cin >> r >> x >> y >> x1 >> y1;
    lld e = sqrtl((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
    std::cout << (ll)std::ceil(e / (2 * r)) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
