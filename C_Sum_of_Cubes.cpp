#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    for (ll i = 1; i * i * i < n; i++) {
        ll a = i * i * i;
        ll b = n - a;
        ll j = std::cbrt(b);
        if (j > 0 && j * j * j == b) {
            std::cout << "YES" << '\n';
            return;
        }
        if ((j + 1) > 0 && (j + 1) * (j + 1) * (j + 1) == b) {
            std::cout << "YES" << '\n';
            return;
        }
    }
    std::cout << "NO" << '\n';
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