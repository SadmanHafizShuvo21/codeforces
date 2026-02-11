#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n, x, y;
    std::cin >> n >> x >> y;
    std::vector<ll> a(n);
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        cnt += a[i] / x; 
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll r = cnt - a[i] / x;
        ll cur = a[i] + r * y;
        ans = std::max(ans, cur);
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
