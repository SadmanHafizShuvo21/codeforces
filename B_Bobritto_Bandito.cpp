#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, l, r;
    std::cin >> n >> m >> l >> r;

    if (r - 1 >= m) {
        std::cout<< 0 << " " << m << "\n";
    }
    else {
        std::cout<<  r - m << " " << r << "\n";
    }
    
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}