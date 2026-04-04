// 31 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 2026;

ll countDivisors(ll n) {
    ll count = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++; 
            if (i != n / i) {
                count++; 
            }
        }
    }
    return count;
}

void solve() {
    ll n, m;
    std::cin >> n >> m;
    
    ll rem = std::abs(n - m);
    rem = rem == 0 ? 1 : rem;
    std::cout << countDivisors(rem) << "\n";
    for (int i = 0; i < n + m; i++) {
        std::cout << (i >= n ? -1 : 1) << " \n"[i == n + m - 1];
    }
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