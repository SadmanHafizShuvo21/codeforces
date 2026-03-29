// 29 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 2026;

ll fibo(ll n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    ll a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        ll c = (a + b) % mod;
        a = b;
        b = c;
    }
    return b;
}
void solve() {
    ll n;
    std::cin >> n;
    std::cout << fibo(n + 1) << '\n';
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