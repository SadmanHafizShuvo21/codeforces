#include <bits/stdc++.h>
using ll = long long;
const ll inf = 1e9 + 7;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    
    ll x = (n + 1) / 2;
    std::cout << ((k <= x) ? 2 * k - 1 : 2 * (k - x)) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}