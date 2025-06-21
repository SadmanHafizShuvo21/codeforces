#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll a, b;
    std::cin >> a >> b;
    if (b > a) {
        std::swap(a, b);
    }
    ll n = a / b;
    std::cout << ((a % b) || (n & (n - 1)) ? -1 : (std::__lg(n) + 2) / 3) << "\n";
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
