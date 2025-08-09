#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    
    if (n % 4 == 0) {
        std::cout << n / 2 << " " << n / 4 << " " << n / 4 << "\n";
    }  
    else if (n % 2 == 0) {
        std::cout << 2 << " " << (n - 1 ) / 2 << " " << (n - 1 ) / 2 << "\n";
    }
    else {
        std::cout << (n - 1) / 2 << " " << (n - 1 ) / 2 << " " << 1 << "\n";
    }
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
