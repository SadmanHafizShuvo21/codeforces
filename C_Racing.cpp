#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> d(n);
    for (int i = 0; i < n; i++) {
        std::cin >> d[i];
    }

    bool ok = true;
    std::vector<ll> l(n + 1), r(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> l[i] >> r[i];
        l[i] = std::max(l[i], l[i - 1] + (d[i - 1] == 1 ? 1 : 0));
        r[i] = std::min(r[i], r[i - 1] + (d[i - 1] != 0 ? 1 : 0));
        if (l[i] > r[i]) {
            ok = false;
        }
    }

    if (ok != true) {
        std::cout << -1 << "\n";
        return;
    }
    
    ll x = l[n];
    for (int i = n - 1; i >= 0; i--) {
        if (d[i] == -1) {
            int nx = std::max(x - 1, l[i]);
            d[i] = x - nx;
        }
        x -= d[i];
    }

    for (int i = 0; i < n; i++) {
        std::cout << d[i] << " \n"[i == n - 1];
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
