#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n);
    
    ll ans = 0;
    while (n--) {
        ll p, q, w;
        std::cin >> p >> q >> w;
        ll x = (m * p + q - 1) / q;
        ans += (x > w ? x - w : 0);
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
