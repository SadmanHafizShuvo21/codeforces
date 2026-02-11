// 24 Jan 2026
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

    if (n == 1) {
        std::cout << "YES\n";
        return;
    }

    for (int i = 2; i <= std::min(n, 23LL); i++) {
        ll x = m - (m / i) * i;
        if (x != 1) {
            std::cout << "NO" << "\n";
            return;
        }
    }

    std::cout << "YES" << "\n";
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