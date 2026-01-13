#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k;
    std::cin >> n >> k;

    if (k > n) {
        std::cout << -1 << '\n';
        return;
    }

    ll ans = 0, i = 1;
    while (n / i > k) {
        i <<= 1;
        ans++;
    }

    if (n / i == k || (n + i - 1) / i == k) {
        std::cout << ans << '\n';
    }    
    else {
        std::cout << -1 << '\n';
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
