#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n, x;
    std::cin >> n >> x; 
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = std::max(a[0], 2 * (x - a[n - 1]));
    for (int i = 0; i < n - 1; i++) {
        ans = std::max(ans, std::abs(a[i + 1] - a[i]));
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
    // solve();
}