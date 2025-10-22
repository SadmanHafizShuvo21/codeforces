#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

ll check (ll x) {
    return x > 0 && (x & (x - 1)) == 0;
}
void solve() {
    ll a, b;
    std::cin >> a >> b;
    if (a == b) {
        std::cout << "YES" << "\n";
        return;
    }
    
    if (a == 0 || b == 0) {
        std::cout << "NO" << "\n";
        return;
    }
    
    ll x = std::llabs(a), y = std::llabs(b);
    if (y > x) {
        std::swap(x, y);
    }

    std::cout << ((x % y == 0 && check(x / y)) ? "YES" : "NO") << "\n";
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