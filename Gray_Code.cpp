#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    ll x = 1 << n;
    for (int i = 0; i < x; i++) {
        ll g = i ^ (i >> 1);
        for (int j = n - 1; j >= 0; j--) {
            std::cout << ((g >> j) & 1);
        }
        std::cout << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}