// 06 April 2026
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
    
    ll idx = -1, mx = -inf;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        if (x > mx) {
            mx = x;
            idx = i + 1;
        }
    }
    std::cout << idx << " " << mx << "\n";
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