#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;
    
    std::vector<std::string> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<std::vector<std::string>> b(m, std::vector<std::string>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> b[i][j];
        }
    }
 
    for (int j = 0; j < n; j++) {
        bool ok = false;
        for (int i = 0; i < m; i++) {
            if (b[i][j] == a[j]) {
                ok = true;
                break;
            }
        }
        if (!ok) {
            std::cout << -1 << "\n";
            return;
        }
    }
    
    int ans = 0;
    for (int i = 0; i < m; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            cnt += (b[i][j] == a[j]);
        }
        ans = std::max(ans, cnt);
    }
    ans = 3 * n - 2 * ans;
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
