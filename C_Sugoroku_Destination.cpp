// 14 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 5e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;

    std::vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
        std::cin >> a[i];

    std::vector<ll> vis(n + 1, 0), ans(n + 1, 0);

    for (ll i = 1; i <= n; i++) {
        if (vis[i]) continue;

        ll cur = i;
        std::vector<ll> path;

        while (!vis[cur]) {
            vis[cur] = 1;
            path.push_back(cur);
            cur = a[cur];
        }

        if (vis[cur] == 1) {
            // cycle found
            std::vector<ll> cycle;
            ll x = cur;
            do {
                cycle.push_back(x);
                x = a[x];
            } while (x != cur);

            ll k = cycle.size();

            // compute 10^100 % k
            ll shift = 1 % k;
            for (int t = 0; t < 100; t++)
                shift = (shift * 10) % k;

            for (ll j = 0; j < k; j++)
                ans[cycle[j]] = cycle[(j + shift) % k];
        }

        for (auto x : path)
            vis[x] = 2;
    }

    // propagate answers
    for (ll i = 1; i <= n; i++) {
        ll cur = i;
        while (!ans[cur])
            cur = a[cur];

        ll final = ans[cur];

        cur = i;
        while (!ans[cur]) {
            ll nxt = a[cur];
            ans[cur] = final;
            cur = nxt;
        }
    }

    for (ll i = 1; i <= n; i++)
        std::cout << ans[i] << " \n"[i == n];
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
