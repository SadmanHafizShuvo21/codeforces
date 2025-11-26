#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const lld error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    ll l = (1LL << n);
    std::map<ll, ll> mp;
    for (int i = 0; i < l; i++) {
        ll a;
        std::cin >> a;
        mp[a]++;
    }

    ll ep = 0;
    ll tp = l * (l - 1) / 2;
    for (auto [x, y] : mp) {
        ep += y * (y - 1) / 2;
    }

    ll ans = tp - ep;
    std::cout << ans * (1 << (n - 1)) << "\n"; 
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
