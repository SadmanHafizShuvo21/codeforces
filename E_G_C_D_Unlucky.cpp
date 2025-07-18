#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> p(n), s(n);

    for (int i = 0; i < n; i++) {
        std::cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }

    bool ok = true;
    for (int i = 1; i < n; i++) {
        if (p[i] > p[i - 1] || (p[i - 1] % p[i] != 0)) {
            ok = false;
            break;
        }
    }

    if (ok) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] > s[i + 1] || (s[i + 1] % s[i] != 0)) {
                ok = false;
                break;
            }
        }
    }

    if (ok && p[n - 1] != s[0]) {
        ok = false;
    }

    if (ok) {
        ll g = p[n - 1]; 
        for (int i = 0; i < n - 1; i++) {
            if (std::gcd(p[i], s[i + 1]) != g) {
                ok = false;
                break;
            }
        }
    }

    std::cout << (ok ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
