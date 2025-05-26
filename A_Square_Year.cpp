#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    ll n = 0;
    for (char c : s) {
        n = n * 10 + (c - '0');
    }

    ll k = std::sqrt(n);
    if (k * k == n) {
        std::cout << 0 << " " << k << "\n";
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
    while (t--) {
        solve();
    }
}