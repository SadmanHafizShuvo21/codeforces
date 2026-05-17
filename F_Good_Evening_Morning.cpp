// 17 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


int day (ll n) {
    return (n > 5 && n < 18);
}

int night (ll n) {
    return (n > 17 || n < 6);
}

void solve() {
    ll n, m;
    std::cin >> n >> m;
    for (int i = 0; i < 24; i++) {
        ll a = (m + i) % 24, b = (n + a) % 24;
        if (day(a) && night(b)) {
            std::cout << i << "\n";
            return;
        }
    }
    std::cout << -1 << "\n";
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