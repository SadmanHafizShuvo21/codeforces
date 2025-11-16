#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll error = 1e-6;
void solve() {
    ll n, a, b;
    std::cin >> a >> b >> n;
    
    std::cout << ((a == b || a / n >= b) ? 1 : 2) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
