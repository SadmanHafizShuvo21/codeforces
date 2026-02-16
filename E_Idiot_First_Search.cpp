// 16 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 3e5 + 7;
const ll error = 1e-6;
const ll mod = 1e9 + 7;
ll l[N], r[N], dp[N], ans[N];

void dfs(ll u) {
    if (l[u] == 0 && r[u] == 0) {
        dp[u] = 1;
        return;
    }
    if (l[u]) {
        dfs(l[u]);
        dfs(r[u]);
    }
    dp[u] = (dp[l[u]] + dp[r[u]] + 3) % mod;
}

void check(ll u, ll sum) {
    ans[u] = (dp[u] + sum) % mod;
    if (l[u]) {
        check(l[u], ans[u]);
        check(r[u], ans[u]);
    }
}

void solve() {
    ll n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cin >> l[i] >> r[i];
    }

    dfs(1);
    check(1, 0);
    for (int i = 1; i <= n; i++) {
        std::cout << ans[i] << " \n"[i == n];
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
    // solve();
}
