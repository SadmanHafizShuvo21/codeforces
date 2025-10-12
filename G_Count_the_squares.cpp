#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

void solve() {
    ll n;
    std::cin >> n;

    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        mp[x]++;
    }

    ll ans = 0;
    for (auto [x, c] : mp) {
        ans += c * (c - 1) * (c - 2) / 6;  
    }
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
}