#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    std::vector<ll> x(n), y(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> x[i];
    }
    for (ll i = 0; i < n; i++) {
        std::cin >> y[i];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ll dx = x[i] - x[j];
            ll dy = y[i] - y[j];
            ll dist = dx * dx + dy * dy;
            ans = std::max(ans, dist);
        }
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
