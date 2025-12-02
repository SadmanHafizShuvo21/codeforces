#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    ll n;
    std::cin >> n;
    
    ll ans = 0, zero = 1;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        ans += (x == 1);
        zero *= (x == 0 ? 2 : 1);
    }
    std::cout << ans * zero << "\n";
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
