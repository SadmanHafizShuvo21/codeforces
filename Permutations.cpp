#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    if (n == 1) {
        std::cout << 1 << "\n";
        return;
    }
    if (n < 4) {
        std::cout << "NO SOLUTION" << "\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            std::cout << i << ' ';
        }
    }
    for (int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            std::cout << i << ' ';
        }
    }
    std::cout << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}