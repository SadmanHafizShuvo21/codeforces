#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

void solve() {
    ll n;
    std::cin >> n;
    
    ll x = std::min(n, 360LL);
    ll y = std::min(540LL, n - 30);
    if (y > 360) {
        x = std::max(x, y);
    }

    ll z = std::min(600LL, n - 45);
    if (z > 540) {
        x = std::max(x, z);
    }

    ll ans = n - x;
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
