#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string a;
    std::cin >> a;
    std::sort(a.rbegin(), a.rend());
    std::cout << a << "\n";
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