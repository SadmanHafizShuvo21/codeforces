#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0;
    for (int i = n - 2; i >= 0; i--) {
        while (a[i] >= a[i + 1] && a[i] > 0) {
            a[i] /= 2;
            ans++;
        }
        if (a[i + 1] <=  a[i]) {
            std::cout << -1 << "\n";
            return;
        }
        
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t; std::cin >> t;
    while (t--) {
        solve();
    }
}
