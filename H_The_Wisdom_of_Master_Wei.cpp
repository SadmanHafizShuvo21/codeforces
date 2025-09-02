#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n, m;
    std::cin >> n >> m;

    std::cout << m + abs(n - m) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}