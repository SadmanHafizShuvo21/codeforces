#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int m;
    std::cin >> m;
    
    std::vector<std::vector<int>> a(m);
    for (int i = 0; i < m; i++) {
        int n;
        std::cin >> n;
        a[i].resize(n);
        for (int j = 0; j < n; j++) {
            std::cin >> a[i][j];
        }
    }
    
    std::set<int> s;
    std::vector<int> ans(m);
    for (int i = m - 1; i >= 0; i--) {
        int x = -1;
        for (int j = 0; j < a[i].size(); j++) {
            if (!s.count(a[i][j])) {
                x = a[i][j];
                s.insert(a[i][j]);
            }
        }
        if (x == -1) {
            std::cout << -1 << "\n";
            return;
        }
        ans[i] = x;
    }

    for (int i = 0; i < m; i++) {
        std::cout << ans[i] << " \n"[i == m - 1];
    }
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
