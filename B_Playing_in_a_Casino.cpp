// 16 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    
    std::vector c(m, std::vector<ll>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> c[j][i];
        }
    }
    
    ll ans = 0;
    for (int i = 0; i < m; i++) {
        std::sort(c[i].begin(), c[i].end());
        for (int j = 1; j < n; j++) {
            ans += 1LL * j * (n - j) * (c[i][j] - c[i][j - 1]);
        }
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
    // solve();
}