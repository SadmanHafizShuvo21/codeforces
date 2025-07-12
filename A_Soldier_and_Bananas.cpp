#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll k, n, w;
    std::cin >> k >> n >> w;
    std::cout << std::max((k * w * (w + 1) / 2 - n), 0LL)  << "\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
