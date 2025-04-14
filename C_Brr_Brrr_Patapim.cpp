#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(2 * n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            std::cin >> x;
            a[i + j + 1] = x;
        }
    }

    ll totalsum = 2 * n * (2 * n + 1) / 2;
    ll partialsum = std::accumulate(a.begin() + 1, a.end(), 0LL);
    a[0] = totalsum - partialsum;

    for (int i = 0; i < 2 * n; i++) {
        std::cout << a[i] << " \n"[i == 2 * n - 1];
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
