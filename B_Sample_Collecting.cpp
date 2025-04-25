#include <bits/stdc++.h>
using ll = long long;
std::vector<std::pair<int, int>> ar;

int opt(int n, int x) {
    std::vector<std::vector<std::vector<int>>> dp(n + 1, std::vector<std::vector<int>>(x + 1, std::vector<int>(2, 0)));
    for (int pos = 0; pos < n; pos++) {
        int w = ar[pos].first;
        int v = ar[pos].second;
        for (int j = x; j >= 0; j--) {
            for (int h = 1; h >= 0; h--) {
                int val = dp[pos][j][h];
                dp[pos + 1][j][h] = std::max(dp[pos + 1][j][h], val);
                if (j >= w) {
                    dp[pos + 1][j - w][h] = std::max(dp[pos + 1][j - w][h], val + v);
                }
                if (h == 1) {
                    dp[pos + 1][j][0] = std::max(dp[pos + 1][j][0], val + v);
                }
            }
        }
    }

    int res = 0;
    for (int j = 0; j <= x; j++) {
        for (int h = 0; h < 2; h++) {
            res = std::max(res, dp[n][j][h]);
        }
    }
    return res;
}

void solve() {
    int n, x;
    std::cin >> n >> x;

    ar.resize(n);
    for (int i = 0; i < n; i++) {
        std::cin >> ar[i].first >> ar[i].second;
    }

    int res = opt(n, x);
    std::cout << res << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
