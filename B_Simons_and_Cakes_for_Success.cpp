// 26 Feb 2026
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
    
    ll ans = 1, r = n;
    for (int i = 2; i * i <= n; i++) {
        if (r % i == 0) {
            ans *= i;
            while (r % i == 0) {
                r /= i;
            }
        }
    }
    ans *= r;
    
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}