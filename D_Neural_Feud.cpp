// 01 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 2026;

void solve() {
    ll n;
    std::cin >> n;

    if (n == 1) {
        std::cout << "walk" << "\n";
    }
    if (n == 2) {
        std::cout << "NO" << "\n";
    }
    if (n == 3) {
        std::cout << "NO" << "\n";
    }
    if (n == 4) {
        std::cout << "NO" << "\n";
    }
    if (n == 5) {
        std::cout << "YES" << "\n";
    }
    else if (n == 6) {
        std::cout << "YES" << "\n";
    }
    else if (n == 7) {
        std::cout << "backwards" << "\n";
    }
    else if (n == 8) {
        std::cout << 7 << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}