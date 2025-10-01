#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n, n);
    for (int i = 0; i < m; i++) {
        ll x, y;
        std::cin >> x >> y;
        x--;
        y--;
        if (x > y) {
            std::swap(x, y);
        }
        a[x] = std::min(a[x], y);
    }

    ll ans = 0, mn = n;
    for (int i = n - 1; i >= 0; i--) {
        mn = std::min(mn, a[i]);
        ans += mn - i;
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
