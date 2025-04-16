#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    ll m, k;
    std::cin >> n >> m >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a.begin(),a.end());
    std::priority_queue<ll, std::vector<ll>, std::greater<ll>> pq;
    ll  sum = 0;

    for (int i = 0; i < n; ++i) {
        ll price = a[i] + sum;
        for (ll j = 0; j < m; ++j) {
            pq.push(price);
        }
        sum += m;
    }

    ll ans = 0;
    for (ll i = 0; i < k; ++i) {
        ans += pq.top();
        pq.pop();
    }

    std::cout << ans << '\n';
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
