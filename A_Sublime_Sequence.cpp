#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll x, n;
    std::cin >> x >> n;
    std::cout << (n % 2 ? x : 0) << '\n';
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
