#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    ll ans = n + 1;
    for (ll l = 0; l < n; l++) {
        ll max_xor = 0;
        for (ll r = l; r < n; r++) {
            for (ll i = l; i < r; i++) {
                max_xor = std::max(max_xor, a[i] ^ a[r]);
            }
            if (max_xor >= k) {
                ans = std::min(ans, r - l + 1);
                break;
            }
        }
    }
    
    if (ans == n + 1) {
        std::cout << -1 << "\n";
    } 
    else {
        std::cout << ans << "\n";
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
}
