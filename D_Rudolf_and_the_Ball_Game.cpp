#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, x;
    std::cin >> n >> m >> x;
    x--;
    std::vector<ll> dp(n, false);
    dp[x] = true;

    for (int i = 0; i < m; i++) {
        int r;
        char c;
        std::cin >> r >> c;

        std::vector<ll> ndp(n, false);
        for (int j = 0; j < n; j++) {
            if (dp[j]) {
                if (c != '1') {
                    ndp[(j + r) % n] = true;
                }
                if (c != '0') {
                    ndp[((j - r) + n) % n] = true;
                }
            }
        }
        std::swap(dp,ndp);
    }

    std::cout << std::count(dp.begin(), dp.end(), true) << "\n";
    for (int i = 0; i < n; i++) {
        if (dp[i]) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << "\n";
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
