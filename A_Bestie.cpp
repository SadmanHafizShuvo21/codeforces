#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    ll g  = 0;
    for (int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        g = std::gcd(g, a);
    }

    // std::cout << g << "\n";

    if (g == 1) {
        std::cout << 0 << "\n";
        return;
    }
    if (std::gcd(g, n) == 1) {
        std::cout << 1 << "\n";
        return;
    }
    if (std::gcd(g, n - 1) == 1) {
        std::cout << 2 << "\n";
        return;
    }

    std::cout << 3 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}