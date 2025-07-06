#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    ll px, py, qx, qy;
    std::cin >> px >> py >> qx >> qy;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());
    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll mx = std::max(0LL, (2 * a[n - 1] - sum));

    ll dist = (px - qx) * (px - qx) + (py - qy) * (py - qy);
    std::cout << (mx * mx <= dist && dist <= sum * sum ? "Yes" : "No") << '\n';
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