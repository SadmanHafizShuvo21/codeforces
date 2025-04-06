#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;

    if (n > (m + 1) * k) {
        k = n / (m + 1);
    }
    for (ll i = 0; i < n; i++) {
        std::cout << (i % k) << (i == n - 1 ? '\n' : ' ');
    }
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
