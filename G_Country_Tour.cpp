#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 7;
std::vector<int> arr[N];
ll dp[N];

ll dfs (ll n) {
    if (dp[n] != 0) {
        return dp[n];
    }

    ll mx = 0;
    for (auto v : arr[n]) {
        mx = std::max(mx, dfs(v));
    }
    dp[n] = mx + 1;
    return dp[n];
}

void solve() {
    int n;
    std::cin >> n;

    for (int i = 0; i <= n; i++) {
        arr[i].clear();
        dp[i] = 0;
    }

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        std::cin >> u >> v;
        arr[u].push_back(v);
        // arr[v].push_back(u); 
    }

    ll mx = 0;
    for (int i = 1; i <= n; i++) {
        mx = std::max(mx, dfs(i));
    }

    std::cout << mx << "\n";
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