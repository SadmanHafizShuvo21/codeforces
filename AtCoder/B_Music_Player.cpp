// 25 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;

    ll vol = 0;
    bool ok = false;
    while (n--) {
        ll x;
        std::cin >> x;
        if (x == 1) {
            vol++;
        }
        else if (x == 2) {
            vol = std::max(0LL, --vol);
        }
        else {
            ok = !ok;
        }

        std::cout << (ok && vol > 2 ? "Yes" : "No") << "\n";
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