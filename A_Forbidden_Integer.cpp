#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k, x;
    std::cin >> n >> k >> x;

    if (k != 1 && x != 1) {
        std::cout << "YES" << "\n";
        std::cout << n << "\n";
        for (int i = 0; i < n; i++) {
            std::cout << 1 << " \n"[i == n - 1];
        }
        return;
    }

    if (k != 1 && n % 2 == 0) {
        std::cout << "YES" << "\n";
        ll m = n / 2;
        std::cout << m << "\n";
        for (int i = 0; i < m; i++){
            std::cout << 2 << " \n"[i == m - 1];
        }
        return;
    }
    if (k > 2 && n >= 3) {
        std::cout << "YES" << "\n";
        ll m = n / 2;
        std::cout << m << "\n";
        for (int i = 0; i < m; i++){
            std::cout << (i == m - 1 ? 3 : 2) << " \n"[i == m - 1];
        }
        return;
    }
    std::cout << "NO" << "\n";
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
