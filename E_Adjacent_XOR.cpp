#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    if (a[n - 1] != b[n - 1]) {
        std::cout << "NO" << "\n";
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        ll d = a[i] ^ b[i];
        if (d != 0 && d != a[i + 1] && d != b[i + 1]) {
            std::cout << "NO" << "\n";
            return;
        }
    }
    
    std::cout << "YES" << "\n";
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