#include <bits/stdc++.h>
using ll = long long;

ll displace(ll n) {
    if (n % 4 == 0) {
        return 0;
    }
    if (n % 4 == 1) {
        return -n;
    }
    if (n % 4 == 2) {
        return 1;
    }
    return n + 1;
}

void solve() {
    ll x, n;
    std::cin >> x >> n;
    ll ans = displace(n);
    x += ((x % 2 == 0) ? ans : - ans);
    std::cout << x << '\n';
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
