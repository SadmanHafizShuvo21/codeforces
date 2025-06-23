#include <bits/stdc++.h>
using ll = long long;
std::vector<std::vector<ll>> adj;

void dfs(ll x, ll p, ll d) {
    if (d) {
        std::cout << x + 1 << " " << p + 1 << "\n";
    } 
    else {
        std::cout << p + 1 << " " << x + 1 << "\n";
    }
    for (auto y : adj[x]) {
        if (y == p) {
            continue;
        }
        dfs(y, x, !d);
    }
}

void solve() {
    ll n;
    std::cin >> n;
    
    adj.assign(n, std::vector<ll>());
    for (ll i = 1; i < n; i++) {
        ll u, v;
        std::cin >> u >> v;
        u--; 
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    ll s = 0;
    while (s < n && adj[s].size() != 2) {
        s++;
    }
    
    if (s == n) {
        std::cout << "NO" << "\n";
        return;
    }
    std::cout << "YES" << "\n";
    
    dfs(adj[s][0], s, 0);
    dfs(adj[s][1], s, 1);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}