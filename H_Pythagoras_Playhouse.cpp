#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll r;
    std::cin >> r;
    ll d = 2 * r;

    ll ans = 0;
    ll mx = std::sqrt(d);
    for (ll i = 2; i <= mx; i++) {
        ll rem = d - i * i;
        if (rem <= 0) {
            break;
        }
        ll nx = std::sqrt(rem);
        if (nx >= i) {
            nx = i - 1;
        }

        ll oe = (i % 2 == 0 ? 1 : 2); 
        for (ll j = oe; j <= nx; j += 2) {
            if (std::gcd(i, j) != 1) {
                continue;
            }
            ll x = i * i + j * j;       
            ans += std::max(0LL, d / x);               
        }
    }

    std::cout << ans << '\n';
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
