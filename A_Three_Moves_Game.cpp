#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;

void solve() {
    ll n, x, y; 
    std::cin >> n >> x >> y;

    std::cout << (std::abs(x - y) > 3 ? "YES" : "NO") << "\n";
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
