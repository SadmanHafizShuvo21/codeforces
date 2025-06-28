#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    ll ans = 0;
    for (ll k = 29; k >= 0; k--) {
        std::map<ll, std::pair<ll, ll>> cnt;
        for (ll x : a) {
            ll mask = (x >> (k + 1)) & ((1LL << (29 - k)) - 1);
            bool bit = (x >> k) & 1;
            if (bit) {
                cnt[mask].second++;
            } 
            else {
                cnt[mask].first++;
            }
        }
        for (const auto &p : cnt) {
            ans += k * p.second.first * p.second.second;
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
    return 0;
}