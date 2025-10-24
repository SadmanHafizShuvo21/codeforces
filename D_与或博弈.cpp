#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll a, b, x, y;
    std::cin >> a >> b >> x >> y;
    
    if (a == x && b == y) {
        std::cout << "Yes" << "\n";
        return;
    }
    
    if (a == x && (b | y) == y) {
        std::cout << "Yes" << "\n";
        return;
    }

    if (b == y && (a & x) == x) {
        std::cout << "Yes" << "\n";
        return;
    }
    std::cout << "No" << "\n";
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