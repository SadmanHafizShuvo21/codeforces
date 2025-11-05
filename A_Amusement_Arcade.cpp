#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    if ((n - 1) % 3 != 0) {
        std::cout << "impossible" << "\n";
    }
    else {
        std::cout << (n - 1) / 3 + 1 << "\n";
    }
    
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
