#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const lld error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;

    if (n == 1) {
        std::cout <<((m % 2 != 0) ? -1 : __builtin_popcountll(m) )<< "\n";
        return;
    }

    ll ans = 0;
    for (ll i = 1; m > 0 && i <= 63; i++) {
        ll cost = (1LL << i);
        if (cost > m) {
            break;
        }

        ll cnt = std::min(n, m / cost);
        m -= cnt * cost;
        ans += cnt;
    }

    std::cout << (m == 0 ? ans : -1) << "\n";
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
