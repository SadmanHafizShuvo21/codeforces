#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;
const ll N = 1e5 + 5; 
std::vector<ll> adj[N];
std::vector<bool> vis(N, false);
std::vector<ll> par(N, -1);

void bfs(ll st, ll en) {
    std::queue<ll> q;
    vis[st] = true;
    q.push(st);

    while (!q.empty()) {
        ll u = q.front(); q.pop();
        if (u == en) {
            return; 
        }

        for (ll v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                par[v] = u;
                q.push(v);
            }
        }
    }
}


void solve() {
    ll n;
    std::cin >> n;
    std::set<ll> s;
    for (int i = 0; i < n; i++) {
        ll u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
        s.insert(u);
        s.insert(v);
    }

    for (auto &x : s) {
        std::sort(adj[x].begin(), adj[x].end());
    }

    ll st = *s.begin();
    ll en = *s.rbegin();

    bfs(st, en);
    std::vector<ll> path;
    for (ll i = en; i != -1; i = par[i]) {
        path.push_back(i);
    }
    std::reverse(path.begin(), path.end());
    for (size_t i = 0; i < path.size(); ++i) {
        std::cout << path[i] << (i + 1 == path.size() ? '\n' : ' ');
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    solve();
}