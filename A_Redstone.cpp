#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
const int MOD = 1e9 + 7;
const ld PI = acosl(-1.0);

void solve() {
    ll n;
    std::cin >> n;
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        mp[x]++;
    }
    for (auto x : mp) {
        if (x.second >= 2) {
            std::cout << "YES" << "\n";
            return;
        }
    }
    std::cout << "NO" << "\n";
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
