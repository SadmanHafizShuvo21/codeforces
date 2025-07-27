#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    ll m = b[0];
    bool ok = true;
    for (int i = 1; i < n; i++) {
        if (b[i] > 2 * m - 1) {
            ok = false;
            break;
        }
        m = std::min(m, b[i]);
    }
    std::cout << (ok ? "YES" : "NO") << "\n";
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
