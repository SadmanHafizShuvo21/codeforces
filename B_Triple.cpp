#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;

    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        mp[a]++;
    }
    
    for (auto x : mp) {
        if (x.second >= 3) {
            std::cout << x.first << "\n";
            return;
        }
    }
    std::cout << -1 << "\n";
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

















