#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::map<ll, ll> mp;

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        ans += mp[x - i];
        mp[x - i]++;
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
