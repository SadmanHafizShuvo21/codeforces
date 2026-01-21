// 19 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll a, b, c;
    std::cin >> a >> b >> c;

    if (2 * b - a > 0 && (2 * b - a) % c == 0) { // Increasing order 123
        std::cout << "YES" << "\n";
    }
    else if (2 * b - c > 0 && (2 * b - c) % a == 0) { // decreasing order 321
        std::cout << "YES" << "\n";
    }
    else if ((a + c) % (2 * b) == 0) { // Same elements 111
        std::cout << "YES" << "\n";
    }
    else {
        std::cout << "NO" << "\n"; // Fool
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
    // solve();
}
