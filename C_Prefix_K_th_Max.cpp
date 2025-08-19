#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::priority_queue<ll, std::vector<ll>, std::greater<ll>> pq;
    for (int i = 0; i < k; i++) {
        ll x; 
        std::cin >> x;
        pq.push(x);
    }
    std::cout << pq.top() << "\n";
    for (int i = k; i < n; i++) {
        ll x; 
        std::cin >> x;
        if (x > pq.top()) {
            pq.pop();
            pq.push(x);
        }
        std::cout << pq.top() << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}