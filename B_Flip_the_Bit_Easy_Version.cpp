// 09 April 2026
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
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll p;
    std::cin >> p;
    p--;

    ll l = 0, r = 0;
    for (int i = p - 1; i >= 0; i--) {
        l += (a[i] != a[i + 1]);
    }
    for (int i = p + 1; i < n; i++) {
        r += (a[i] != a[i - 1]);
    }

    ll ans = std::max(l, r);
    ans += (ans % 2);
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