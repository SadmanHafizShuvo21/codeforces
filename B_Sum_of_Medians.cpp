#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n * k);
    for (int i = 0; i < n * k; i++) {
        std::cin >> a[i];
    }

    ll ans = 0, inc = n - (n + 1)/2 + 1;
    for (ll i = 0, j = inc - 1; i < k; i++) {
        ans += a[(n * k - 1) - j];
        j += inc;
    }
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
