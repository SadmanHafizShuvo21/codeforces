#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;

void solve() {
    ll a, b;
    std::cin >> a >> b;

    if (a % 2 && b % 2) {
        std::cout << a * b + 1 << '\n';
        return;
    }

    if (b % 2 == 0 && a * b % 4 == 0) {
        std::cout << a * b / 2 + 2 << '\n';
        return;
    }

    std::cout << -1 << '\n';
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
