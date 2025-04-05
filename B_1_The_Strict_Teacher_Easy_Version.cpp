#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, q;
    std::cin >> n >> m >> q;
    
    std::vector<ll> b(m);
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }
    std::sort(b.begin(), b.end());
    
    while (q--) {
        ll a;
        std::cin >> a;
        
        auto it = std::lower_bound(b.begin(), b.end(), a);
        ll ans;
        if (it == b.begin()) {
            ans = b[0] - 1;
        } 
        else if (it == b.end()) {
            ans = n - b[m - 1];
        } 
        else {
            ans = (*it - *(it - 1)) / 2;
        }
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
