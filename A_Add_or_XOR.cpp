#include <bits/stdc++.h>
using ll = long long;
ll inf = 1e18;

void operation(ll curr, ll next, ll cost, std::vector<ll>& dist, std::queue<ll>& q) {
    if (next <= 100 && dist[next] > dist[curr] + cost) {
        dist[next] = dist[curr] + cost;
        q.push(next);
    }
}

void solve() {
    ll a, b, x, y;
    std::cin >> a >> b >> x >> y;
    
    std::vector<ll> dist(101, inf);
    std::queue<ll> q;
    dist[a] = 0;
    q.push(a);
    
    while (!q.empty()) {
        ll curr = q.front();
        q.pop();
        
        operation(curr, curr + 1, x, dist, q);
        operation(curr, curr ^ 1, y, dist, q); 
    }
    
    std::cout << (dist[b] == inf ? -1 : dist[b]) << '\n';
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