// 18 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 1e6 + 3;

void solve() {
    ll n;
    std::cin >> n;
    
    ll cnt = 1;
    while(n > 1) {
        cnt = 3 * cnt % mod;
        n--;
    }
    std::cout << cnt << "\n";
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