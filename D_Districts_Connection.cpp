#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll idx = -1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            idx = i;
        }
    }

    if (idx == -1) {
        std::cout << "NO" << "\n";
        return;
    }

    std::cout << "YES" << "\n";
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            std::cout << 1 << " " << i + 1 << "\n";
        }
        else {
            std::cout << idx + 1 << " " << i + 1 << "\n";
        }
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