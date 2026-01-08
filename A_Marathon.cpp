#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    std::vector<ll> a(4);
    for (int i = 0; i< 4; i++) {
        std::cin >> a[i];
    }
    
    ll ans = 0;
    for (int i = 1; i < 4; i++) {
        ans += (a[0] < a[i]);
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