// 27 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


ll cal (ll x, ll mn, ll mx, ll d) {
    ll cnt = 0;

    cnt += (x < mn);
    cnt += (mx < x + d);
    return cnt;
}
void solve() {
    ll n, m, d;
    std::cin >> n >> m >> d;
    std::vector<ll> a(n);
    for (int i =0; i < n; i++) {
        std::cin >> a[i];
    }

    ll mn = *std::min_element(a.begin(), a.end());
    ll mx = *std::max_element(a.begin(), a.end());

    ll l = std::max(0LL, mx - d);
    ll r = std::min(mn, m - d);
    if (mx - mn > d || l > r) {
        std::cout << "impossible" << "\n";
        return;
    }
    if (mx - mn == d) {
        std::cout << n << "\n"; 
        return;
    }

    ll ans = n + std::min(cal(l, mn, mx, d), cal(r, mn, mx, d));
    std::cout << ans << "\n";
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