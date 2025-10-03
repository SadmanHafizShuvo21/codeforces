#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll a1, h1, a2, h2;
    std::cin >> a1 >> h1 >> a2 >> h2;
    
    ll x = (h2 + a1 - 1) / a1;
    ll y = (h1 + a2 - 1) / a2;
    
    std::cout << (x < y ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
