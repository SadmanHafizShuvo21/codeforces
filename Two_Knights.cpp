#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    for (ll i = 1; i <= n; i++) {
        ll ans = i * i * (i * i - 1) / 2;
        ll x = 4 * (i - 1) * (i - 2);
        std::cout << (i < 3 ? ans : ans - x) << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
