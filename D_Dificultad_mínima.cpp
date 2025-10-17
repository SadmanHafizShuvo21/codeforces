#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;
const ll N = 1e6 + 5;
std::vector<ll> adj[N];
std::vector<ll> radj[N];
std::vector<bool> vis(N, false);
std::vector<ll> par(N, -1);
const ll inf = 1e18;
void bfs(ll st, ll en) {
    std::queue<ll> q;
    std::vector<ll> dist(N, inf);

    dist[st] = 0;
    vis[st] = true;
    q.push(st);

    while (!q.empty()) {
        ll u = q.front(); q.pop();
        if (u == en) {
            break;
        }
        for (ll v : adj[u]) {
            if (dist[v] == inf) {
                dist[v] = dist[u] + 1;
                vis[v] = true;
                q.push(v);
            }
        }
    }

    std::vector<ll> path;
    ll cur = en;
    if (dist[cur] == inf) {
        return;
    }
    while (true) {
        path.push_back(cur);
        if (cur == st) break;
        ll next_u = -1;
        for (ll u : radj[cur]) {
            if (dist[u] == dist[cur] - 1) {
                next_u = u;
                break;
            }
        }
        par[cur] = next_u;
        cur = next_u;
    }
    std::reverse(path.begin(), path.end());
    for (int i = 0; i < path.size(); ++i) {
        std::cout << path[i] << " \n"[i + 1 == path.size()];
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
        radj[v].push_back(u);   
        s.insert(u);
        s.insert(v);
    }

    for (auto &x : s) {
        std::sort(adj[x].begin(), adj[x].end());   
        std::sort(radj[x].begin(), radj[x].end()); 
    }

    ll st = 1;              
    ll en = *s.rbegin();    

    bfs(st, en);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
