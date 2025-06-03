#include <bits/stdc++.h>
using ll = long long;
constexpr ll inf = 1E18;

void solve() {
    ll x;
    std::cin >> x;
    if (x == 1) {
        std::cout << 3 << '\n';
        return;
    }
    ll b = 0;
    ll temp = x;
    while (temp > 0) {
        temp >>= 1;
        b++;
    }
    std::cout << 2 * b + 1 << '\n';
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