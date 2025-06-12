#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> grid(n);
    for (int i = 0; i < n; i++) {
        std::cin >> grid[i];
    }

    int ans = 0;
    for (int r1 = 0; r1 < n; r1++) {
        for (int r2 = r1; r2 < n; r2++) {
            for (int c1 = 0; c1 < m; c1++) {
                for (int c2 = c1; c2 < m; c2++) {
                    bool ok = true;
                    for (int i = r1; i <= r2 && ok; i++) {
                        for (int j = c1; j <= c2; j++) {
                            if (grid[i][j] == '1') {
                                ok = false;
                                break;
                            }
                        }
                    }
                    if (ok) {
                        int perim = 2 * ((r2 - r1 + 1) + (c2 - c1 + 1));
                        ans = std::max(ans, perim);
                    }
                }
            }
        }
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
} 
