#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll a, b;
    std::cin >> a >> b;
    ll ans = 1e18;
    for (ll i = 0; i < 32; i++) {
        ll cnt = i;
        ll x = a;
        ll y = b + i;

        if (y == 1) {
            continue;
        }
        
        while (x) {
            x /= y;
            cnt++;
        }
        
        ans = std::min(ans, cnt);
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}