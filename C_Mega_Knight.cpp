#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::vector<ll>> a(n, std::vector<ll> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ll sum = a[i][j];
            if (i > 0) {
                sum += a[i - 1][j];
            }
            if (i + 1 < n) {
                sum += a[i + 1][j];
            }
            if (j > 0) {
                sum += a[i][j - 1];
            }
            if (j + 1 < m) {
                sum += a[i][j + 1];
            }
            ans = std::max(ans, sum);
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
