#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<int> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i] == 0 && a[i + 1] == 0) {
            std::cout << "YES" << "\n";
            return;
        }
    }
    std::cout << (std::count(a.begin(), a.end(), 1) != n ? "NO" : "YES") << '\n';
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
