#include<bits/stdc++.h>
using ll = long long;   

void solve() {
    ll n;
    std::cin >> n;
    
    std::cout << (n % 4 ? "Alice" : "Bob") << '\n';
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