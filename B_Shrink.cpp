#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::cout << "1 ";
    for (int i = n; i >= 4; i--) {
        std::cout << i << " ";
    }
    std::cout << "3 2" <<"\n";
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