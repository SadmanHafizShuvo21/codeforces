// 18 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    while (true) {
        int n;
        std::cin >> n;
        if (n == 0) {
            return;
        }

        std::vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            std::cin >> b[i];
        }

        for (int i = 0; i < n; i++) {
            std::cout << a[i] << " \n"[i == n - 1];
        }
        for (int i = 0; i < n; i++) {
            std::cout << b[i] << " \n"[i == n - 1];
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t) {
    //     solve();
    // }
    solve();
}