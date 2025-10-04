#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, a, b, c, d;
    std::cin >> n >> a >> b >> c >> d;
    
    std::cout << (std::max(a == c ? 0 : (c > a ? c : n - c), b == d ? 0 : (d > b ? d : n - d))) << "\n";
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
