// 04 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

bool ask(ll x) {
    std::cout << "? " << x << "\n" << std::flush;
    ll n;
    std::cin >> n;
    return n;
}
void solve() {
    ll l = 1, r = 1e6;
    while(l < r) {
        ll mid = (l + r + 1) / 2;
        if (ask(mid) == 1) {
            l = mid;
        }
        else {
            r = mid - 1;
        }
    }
    std::cout << "! " << l << "\n" << std::flush;
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