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

    ll x = 1;
    for (ll i = 2; i <= n; i++) {
        x = std::lcm(x, i);
        if (x > m - 1) {
            break;
        }
    }

    std::cout << (x <= m - 1 && (m - 1) % x == 0 ? "YES" :"NO") << "\n";
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
