#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;

    ll ans = m, x = 0;
    for (int i = 0; i < n; i++) {
        ll a, b;
        std::cin >> a >> b;
        ans -= ((a + b) % 2 != x);
        x = (a + b) % 2;
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
