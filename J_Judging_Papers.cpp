#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, k, b;
    std::cin >> n >> m >> k >> b;
    
    std::vector<std::vector<ll>> a(n, std::vector<ll>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }

    ll ans = 0, rem = 0;
    for (int i = 0; i < n; i++) {
        ll sum = 0, pos = 0;
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
            pos += (a[i][j] > 0 ? 1 : 0);
        }

        if (sum >= k) {
            ans++;
        }
        else {  
            rem += (sum + m - 2 * pos >= k ? 1 : 0);
        }
    }

    // std::cout << ans << " " << rem << '\n';
    rem = std::min(rem, b);
    std::cout << ans + rem << "\n";
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
