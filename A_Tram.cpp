#include<bits/stdc++.h>
using ll = long long;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n;
    
    ll ans = -inf, mx = 0;
    for (int i = 0; i < n; i++) {
        ll x, y;
        std::cin >> x >> y;
        mx += (y - x);
        ans = std::max(mx, ans);
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}