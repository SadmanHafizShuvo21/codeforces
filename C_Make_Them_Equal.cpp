// 28 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    char ch;
    std::string s;
    std::cin >> n >> ch >> s;
    if (s == std::string(n, ch)) {
        std::cout << 0 << "\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        bool ok = true;
        for (int j = i; j <= n; j += i) {
            if (s[j - 1] != ch) {
                ok = false;
            }
        }
        if (ok) {
            std::cout << 1 << '\n';
            std::cout << i << '\n';
            return;
        }
    }

    std::cout << 2 << "\n";
    std::cout << n - 1 << " " << n << "\n";
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