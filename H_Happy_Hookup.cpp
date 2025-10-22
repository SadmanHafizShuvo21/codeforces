#include<bits/stdc++.h>
using ll = long long;
const ll N = 1e5 + 7;
std::vector<ll> adj[N];
std::vector<bool> visa(N, false), visb(N, false);

void bfs (int n, std::vector<bool>& vis) {
    vis[n] = true;
    std::queue<ll> q;
    q.push(n);
    while(!q.empty()) {
        ll u = q.front();
        q.pop();
        for(auto v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

void solve() {
    ll n, m; 
    std::cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        adj[i].clear();
        visa[i] = false;
        visb[i] = false;
    }

    while (m--) {
        ll u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
    }
    ll a, b; 
    std::cin >> a >> b;
    bfs(a, visa);
    bfs(b, visb);
    
    for (int i = 1; i <= n; i++) {
        if (visa[i] && visb[i]) {
            std::cout << "yes" << "\n";
            std::cout << i << "\n";
            return;
        }
    }
    std::cout << "no" << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}