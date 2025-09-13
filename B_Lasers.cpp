#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, x, y;
    std::cin >> n >> m >> x >> y;
    std::vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    std::cout << n + m << '\n';
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