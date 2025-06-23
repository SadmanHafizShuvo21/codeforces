#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    bool ok = false;
    for (int i = 0; i < n - 1; i++) {
        if (std::abs(a[i] - a[i + 1]) <= 1) {
            std::cout << "0" << "\n";
            return;
        }

        if (i + 2 < n && ((a[i] >= a[i + 1] && a[i + 1] <= a[i + 2]) || (a[i] <= a[i + 1] && a[i + 1] >= a[i + 2]))) {
            ok = true;
        }
    }

    std::cout << (ok ? 1 : -1) << "\n";
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
