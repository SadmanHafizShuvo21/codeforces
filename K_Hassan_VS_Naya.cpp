#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n;
    std::cin >> n;

    ll g = 0;
    for(int i = 0; i < n; i++) {
        ll x; 
        std::cin >> x;
        g = std::gcd(g, x);
    }
    
    std::cout << (g == 1 ? "Naya" : "Hassan") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}