#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;
    
    std::vector a(n, std::vector<int>(m));
    std::vector<int> f(n * m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
            a[i][j]--;
            f[a[i][j]] = std::max(f[a[i][j]], 1);
            if ((i && a[i][j] == a[i - 1][j]) || (j && a[i][j] == a[i][j - 1])) {
                f[a[i][j]] = 2;
            }
        }
    }
    
    int ans = std::accumulate(f.begin(), f.end(), 0) - *std::max_element(f.begin(), f.end());
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
    
    return 0;
}