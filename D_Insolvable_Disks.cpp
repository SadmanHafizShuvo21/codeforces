#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (n <= 1) {
        std::cout << 0 << "\n";
        return;
    }

    bool ok = true;
    for (int i = 1; i < n - 1; i++) {
        if (a[i] - a[i - 1] > a[i + 1] - a[i]) {
            ok = false;
            break;
        }
    }

    std::cout << (ok ? n - 1 : n / 2) << "\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}
