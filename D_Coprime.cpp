#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(1001);
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        a[x] = i + 1;
    }

    ll ans = -1;
    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= i; j++) {
            if(a[i] && a[j] && std::gcd(i, j) == 1) {
                ans = std::max(ans, a[i] + a[j]);
            }
        }
    }
    
    std::cout << ans << '\n';
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