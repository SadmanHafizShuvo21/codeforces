#include <bits/stdc++.h>
using ll = long long;
using ull = unsigned long long;

void solve() {
    ull n, l, r, k;
    std::cin >> n >> l >> r >> k;

    if (n & 1ULL) {
        std::cout << l << '\n';
        return;
    }
    
    if (n == 2ULL) {
        std::cout << -1 << '\n';
        return;
    }

    int hb = 63 - __builtin_clzll(l);
    ull p = 1ULL << (hb + 1);
    if (p <= r) {
        std::cout << (k <= n - 2 ? l : p) << '\n';
        return;
    }
    
    std::cout << -1 << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
