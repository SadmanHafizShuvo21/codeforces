// 12 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, a, b;
    std::cin >> n >> a >> b;

    if (n == 1) {
        std::cout << a << "\n";
        return;
    }

    if (2 * a <= b) {
        std::cout << n * a << "\n";
    }
    else {
        std::cout << (n % 2 ? (n / 2) * b + a : (n / 2) * b) << "\n";
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