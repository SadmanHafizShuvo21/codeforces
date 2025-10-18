#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;
    
void solve() {
    ll a, b;
    std::cin >> a >> b;
    
    if (a == b) {
        std::cout << 0 << "\n";
        return;
    }

    ll d = a ^ b;
    if (a >= d) {
        std::cout << 1 << '\n';
        std::cout << d << "\n";
        return;
    }

    if (a >= b && d >= a) {
        std::cout << 2 << "\n";
        std::cout << b << ' ' << a << '\n';
    }  
    else {
        std::cout << -1 << "\n";
    }  
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