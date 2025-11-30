#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    ll n;
    std::cin >> n;
    std::map<ll, ll> mp;
    for (int i = 0; i < 2 * n; i++) {
        ll x;
        std::cin >> x;
        mp[x]++;
    }

    ll a = 0, b = 0;
    for (auto [x, y] : mp) {
        a += (y % 2 == 1);
        b += (y % 2 == 0);
    }

    ll ans = (a >= 1 || (n % 2 == b % 2) ? 2 * b + a : 2 * b - 2);
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}
