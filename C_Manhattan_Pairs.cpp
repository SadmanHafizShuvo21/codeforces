#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i] >> b[i];
    }
    
    std::vector<int> order(n);
    iota(order.begin(), order.end(), 0);
    std::sort(order.begin(), order.end(), [&](int i, int j) {
      return a[i] < a[j];
    });
    std::sort(order.begin(), order.begin() + n / 2, [&](int i, int j) {
      return b[i] < b[j];
    });
    std::sort(order.begin() + n / 2, order.end(), [&](int i, int j) {
      return b[i] < b[j];
    });
    
    for (int i = 0; i < n / 2; i++) {
      std::cout << order[i] + 1 << " " << order[n - 1 - i] + 1 << '\n';
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