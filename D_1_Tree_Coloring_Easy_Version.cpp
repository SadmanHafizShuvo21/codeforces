#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
std::vector<int> arr[N];
ll depth[N], vis[N];

void bfs(ll st, ll n) {
    std::queue<int> q;
    q.push(st);
    depth[st] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : arr[u]) {
            if (depth[v] == -1) {
                depth[v] = depth[u] + 1;
                vis[u]++;
                q.push(v);
            }
        }
    }
}

void solve() {
    ll n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        arr[i].clear();
        depth[i] = -1;
        vis[i] = 0;
    }
    for (int i = 0; i < n - 1; i++) {
        ll u, v;
        std::cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    bfs(1, n);

    ll cntd = 0;
    std::map<ll, ll> cnt;
    for (int i = 1; i <= n; i++) {
        cnt[depth[i]]++;
        cntd = std::max(cntd, cnt[depth[i]]);
    }

    ll mx = 0;
    for (int i = 1; i <= n; i++) {
        mx = std::max(mx, vis[i]);
    }

    ll ans = std::max(cntd, mx + 1);
    std::cout << ans << "\n";
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
