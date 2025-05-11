#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, x, y;
    std::cin >> n >> m >> x >> y;

    std::vector<std::string> grid(n);
    for (int i = 0; i < n; i++) {
        std::cin >> grid[i];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int j = 0;
        while (j < m) {
            if (j + 1 < m && grid[i][j] == '.' && grid[i][j + 1] == '.' && y < 2 * x) {
                ans += y;
                j += 2;
            } 
            else if (grid[i][j] == '.') {
                ans += x;
                j++;
            } 
            else {
                j++;
            }
        }
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
