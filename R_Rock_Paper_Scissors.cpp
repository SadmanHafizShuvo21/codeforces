// 06 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    if (m > 5 * n || m % 5 == 1 || m % 5 == 3) {
        std::cout << "Impossible" << "\n";
        return;
    }

    std::cout << ((m == 0 || m == 2 * n || m == 5 * n) ? "No" : "Yes") << "\n";
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