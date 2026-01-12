#include<bits/stdc++.h>
using ll = long long;
using lld = double;
const ll inf = 1e18;
void solve() {
    ll x, y, n;
    std::cin >> x >> y >> n; 
    
    n -= y;
    ll div = n / x;
    std::cout << (x * div) + y << "\n";   
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}