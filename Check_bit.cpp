#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, i;
    std::cin >> n >> i;
    std::cout << ((n & (1LL << i)) ? "true" : "false") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
