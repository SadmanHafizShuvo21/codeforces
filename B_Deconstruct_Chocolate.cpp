// 14 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll h, w, q;
    std::cin >> h >> w >> q;

    while(q--) {
        ll t, x;
        std::cin >> t >> x;

        if (t == 1) {
            std::cout << x * w << "\n";
            h -= x;
        }
        else {
            std::cout << x * h << "\n";
            w -= x;
        }
    }
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