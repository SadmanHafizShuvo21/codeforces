#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ll x;
        std::cin >> x;
        ans = std::gcd(ans, i - x);
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
}