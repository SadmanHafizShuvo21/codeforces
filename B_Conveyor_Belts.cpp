#include <bits/stdc++.h>
using ll = long long;

int layer(ll x, ll y, ll n) {
    return std::min({x - 1, y - 1, n - x, n - y});
}

void solve() {
    ll n, x1, y1, x2, y2;
    std::cin >> n >> x1 >> y1 >> x2 >> y2;
    ll l1 = layer(x1, y1, n);
    ll l2 = layer(x2, y2, n);
    std::cout << std::abs(l1 - l2) << '\n';
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
