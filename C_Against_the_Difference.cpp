#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    std::vector<std::vector<int>> pos(n+1);
    for (int i = 1; i <= n; i++) {
        pos[a[i]].push_back(i);
    }

    std::vector<std::array<int,3>> arr;
    for (int v = 1; v <= n; v++) {
        for (int j = 0; j + v - 1 < (int)pos[v].size(); j++) {
            arr.push_back({pos[v][j], pos[v][j+v-1], v});
        }
    }

    if (arr.empty()) {
        std::cout << 0 << '\n';
        return;
    }

    std::sort(arr.begin(), arr.end(), [](auto &x, auto &y){
        return x[1] != y[1] ? x[1] < y[1] : x[0] < y[0];
    });

    int m = arr.size();
    std::vector<int> dp(m+1, 0);
    for (int i = 1; i <= m; i++) {
        int l = arr[i-1][0], w = arr[i-1][2];
        int idx = std::upper_bound(arr.begin(), arr.end(), l-1,
            [](int val, const std::array<int,3>& x){ return val < x[1]; }) - arr.begin();
        dp[i] = std::max(dp[i-1], dp[idx] + w);
    }

    std::cout << dp[m] << '\n';
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
