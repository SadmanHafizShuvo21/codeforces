#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i & 1) {
            std::cout << -1;
        }
        else {
            std::cout << (i == n ? 2 : 3);
        }
        std::cout << " \n"[i == n];
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

