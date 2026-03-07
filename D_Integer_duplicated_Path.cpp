// 07 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    std::vector<std::vector<ll>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        ll x, y;
        std::cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    ll cnt = 0;
    std::vector<std::string> ans(n + 1);
    std::map<ll, ll> mp;
    std::function<void(ll,ll)> dfs = [&](ll u, ll p) {
        mp[a[u]]++;
        if (mp[a[u]] == 2) {
            cnt++;
        }

        ans[u] = (cnt > 0 ? "Yes" : "No");
        for (ll v : adj[u]) {
            if (v == p) {
                continue;
            }
            dfs(v, u);
        }
        mp[a[u]]--;
        if (mp[a[u]] == 1) {
            cnt--;
        }
    };
    dfs(1, 0);

    for (int i = 1; i <= n; i++) {
        std::cout << ans[i] << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}