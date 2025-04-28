#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int total = a + b + c;
    if (total % 3 != 0) {
        std::cout << "NO\n";
        return;
    }
    int target = total / 3;
    if (target >= a && target >= b && target <= c) {
        std::cout << "YES\n";
    } 
    else {
        std::cout << "NO\n";
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
