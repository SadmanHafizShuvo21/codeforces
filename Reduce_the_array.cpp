#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::priority_queue<ll, std::vector<ll>, std::greater<ll>> pq;
    
    for (ll i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        pq.push(a);
    }

    ll ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();
        ans += (a + b);
        pq.push(a + b);
    }

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
