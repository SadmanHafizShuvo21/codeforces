#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

std::vector<ll> arr[N];
std::vector<bool> vis(N, false);
std::vector<ll> dist(N, 0);

ll n, m, k;
std::vector<ll> a(N);

void bfs(ll start) {
    std::queue<ll> q;
    vis[start] = true;
    dist[start] = 0;
    q.push(start);
    while (!q.empty()) {
        ll u = q.front();
        q.pop();
        for (auto v : arr[u]) {
            if (!vis[v]) {
                vis[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

void solve() {
    std::cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        ll u, v;
        std::cin >> u >> v;
        u--;
        v--;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    std::fill(vis.begin(), vis.begin() + n + 1, false);
    bfs(0);

    std::vector<ll> ans(k + 1, 0);
    for (int i = 0; i < n; i++) {
        ans[a[i]] = std::max(ans[a[i]], dist[i]);
    }

    for (int i = 1; i <= k; i++) {
        std::cout << ans[i] << " \n"[i == k];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}
