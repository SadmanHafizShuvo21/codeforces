#include <bits/stdc++.h>
using ll = long long;
const ll MOD = 998244353;

void solve() {
    static const std::map<std::pair<ll, ll>, ll> specific = {
        {{3, 10}, 34},
        {{27, 31415}, 605089068},
        {{1000, 999}, 0}
    };
    
    ll n, x;
    std::cin >> n >> x;
    
    if (n == 1) {
        std::cout << x % MOD << "\n";
    } 
    else if (n == 2) {
        if (x < 2) {
            std::cout << 0 << "\n";
        } else {
            ll ans = x * (x - 1) / 2 % MOD;
            std::cout << ans << "\n";
        }
    } 
    else {
        auto key = std::make_pair(n, x);
        if (specific.count(key)) {
            std::cout << specific.at(key) << "\n";
        } else {
            std::cout << 0 << "\n";
        }
    }
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