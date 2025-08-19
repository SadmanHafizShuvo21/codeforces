#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::priority_queue<ll, std::vector<ll>, std::greater<ll>> pq;
    for (int i = 0; i < n; i++) {
        ll v;
        std::cin >> v;
        pq.push(v);
    }
    ll cost = 0;
    while (pq.size() > 1) {
        ll a = pq.top(); 
        pq.pop();
        ll b = pq.top(); 
        pq.pop();
        cost += a + b;
        pq.push(a + b);
    }
    std::cout << cost << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}