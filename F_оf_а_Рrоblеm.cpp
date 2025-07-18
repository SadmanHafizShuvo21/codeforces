#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll a, b;
    std::cin >> a >> b;
    ll ans = 12 * a + 14 * a * b + abs(a - b) + (a - 3 * b) * b + 2;
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}