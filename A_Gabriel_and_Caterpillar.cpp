#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll h1, h2, a, b;
    std::cin >> h1 >> h2 >> a >> b;

    ll hi = h2 - (h1 + 8 * a);
    if (hi <= 0) {
        std::cout << 0 << "\n";
        return;
    }
    
    ll nxt = (a - b) * 12; 
    if (nxt <= 0) {
        std::cout << -1 << "\n";
        return;
    }
    std::cout << (hi + nxt - 1) / nxt << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
