#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll a, b; 
    std::cin >> a >> b;

    if (a == b) {
        std::cout << 0 << "\n";
        return;
    }
    if (a > b) {
        std::swap(a, b);
    }
    std::cout << (b % a ? 2 : 1) << "\n";
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
