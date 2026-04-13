// 12 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    if (n == 2) {
        std::cout << 1 << "\n";
        return;
    }
    if (n % 2) {
        std::cout << (n / 2) * (n / 2 + 1) << "\n";
        return;
    }

    ll x = n / 2;
    if (n % 4 == 0) {
        std::cout << (x - 1) * (x + 1) << "\n";
        return;
    }
    std::cout << (x - 2) * (x + 2) << "\n";
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