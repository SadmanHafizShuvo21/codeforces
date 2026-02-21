// 21 Feb 2026
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
    std::vector<ll> a(m + 1, false);
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;

        ll ans = 0;
        for (int j = 0; j < x; j++) {
            ll y;
            std::cin >> y;
            if (!a[y] && ans == 0) {
                ans = y;
                a[y] = true;
            }
        }
        std::cout << ans << "\n";
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
