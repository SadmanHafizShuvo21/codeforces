#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll a, b, c;
    std::cin >> a >> b >> c;

    std::cout << 100 << "\n";
    for (int i = 0; i < 50; i++) {
        std::cout << a << " ";
    }
    for (int i = 0; i < 45; i++) {
        std::cout << b << " ";
    }
    for (int i = 0; i < 4; i++) {
        std::cout << c << " ";
    }
    std::cout << c + 1 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}