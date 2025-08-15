#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, ans = 0;
    std::cin >> n;
    std::priority_queue<ll> pq;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        if (x != 0) {
            pq.push(x);
        }
        else {
            if(!pq.empty()) {
                ans += pq.top();
                pq.pop();
            }
        }
    }
    std::cout << ans << "\n";
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
