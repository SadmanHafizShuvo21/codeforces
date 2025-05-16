#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, p, q;
    std::cin >> n >> m >> p >> q;
    
    std::cout << ((n % p != 0 || (n * q == m * p)) ? "YES" : "NO") << "\n";
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
