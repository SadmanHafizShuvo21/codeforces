#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int x, y, k;
    std::cin >> x >> y >> k;
    
    ll nd = 1LL * k * (y +  1);
    ll stk = k + (nd - 1 + x - 2) / (x - 1);
    std::cout << stk << "\n";
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
