#include <bits/stdc++.h>
using ll = long long;

int countMaxParity(std::vector<std::string>& mat, int rows, int cols, bool transpose) {
    int maxParity = 0;
    for (int i = 0; i < (transpose ? cols : rows); i++) {
        int count = 0;
        for (int j = 0; j < (transpose ? rows : cols); j++) {
            char c = transpose ? mat[j][i] : mat[i][j];
            if (c == '1'){
                count++;
            } 
        }
        maxParity += (count % 2);
    }
    return maxParity;
}

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::string> grid(n);
    for (int i = 0; i < n; i++) {
        std::cin >> grid[i];
    }
    ll maxRow = countMaxParity(grid, n, m, false);
    ll maxCol = countMaxParity(grid, n, m, true);
    ll ans = std::max(maxCol, maxRow);
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin >> testcase;
    while (testcase--) {
        solve();
    }
}
