// 18 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    while(q--) {
        ll l, r, x;
        std::cin >> l >> r >> x;
        l--, r--, x--;
        
        ll sum = 0;
        for (int i = l; i <= r; i++) {
            sum += (a[i] <= a[x]);
        }

        std::cout << (sum + l - 1 == x ? "Yes" : "No") << "\n";
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