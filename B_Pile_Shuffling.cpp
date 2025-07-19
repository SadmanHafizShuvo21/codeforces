#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll a, b, c, d;
        std::cin >> a >> b >> c >> d;
        ans += std::max(0LL, a - c);
        ans += std::max(0LL, b - d);
        if (b > d) {
            ans += std::min(a, c);
        }
    }
    
    std::cout << ans << "\n";
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