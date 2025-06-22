#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::vector<ll> a(3), b(3);

    for (int i = 0; i < 3; i++) {
        std::cin >> a[i] >> b[i];
    }

    bool ok = false;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::swap(a[j],b[j]);
        }

        if (a[0] == a[1] && a[1] == a[2] && a[0] == b[0] + b[1] + b[2]) {
            ok = true;
        }
        if (a[1] == a[2] && b[0] == b[1] + b[2] && a[0] + a[1] == b[0]) {
            ok = true;
        }
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
