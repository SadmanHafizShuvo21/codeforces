// 26 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

ll pref[10];
void precompute() {
    pref[0] = 0;
    for (int i = 1; i <= 9; i++) {
        ll x = 1 * i * i;
        ll val = (x % 9 ? x % 9 : 9);
        pref[i] = pref[i - 1] + val;
    }
}

ll calc(ll n) {
    return (n / 9) * 51 + pref[n % 9];
}

void solve() {
    ll l, r;
    std::cin >> l >> r;
    std::cout << calc(r) - calc(l - 1) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    precompute();
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}