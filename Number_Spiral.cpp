#include <bits/stdc++.h>
using ll = long long;

ll number_spiral(ll x, ll y, ll n) {
    return (x == n ? (n * n) - (y - 1) : (n - 1) * (n - 1) + x);
}

void solve() {
    ll x, y;
    std::cin >> x >> y;
    
    ll mx = std::max(x, y);
    std::cout << (mx % 2 ? number_spiral(y, x, mx) : number_spiral(x, y, mx)) << "\n";
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
