#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll x, y;
    std::cin >> x >> y;

    ll l = std::lcm(x, y);
    std::cout << ((y % x != 0) ? l : (y / x) * y) << "\n";
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