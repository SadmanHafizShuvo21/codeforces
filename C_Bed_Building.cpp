// 01 March 2026
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
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());
    std::vector<ll> d(n - 1);
    for (int i = 0; i < n - 1; i++) {
        d[i] = a[i + 1] - a[i];
    }

    std::vector<ll> suf(n - 1);
    suf[n - 2] = d[n - 2];
    for (int i = n - 3; i >= 0; i--) {
        suf[i] = std::min(d[i], suf[i + 1]);
    }

    ll ans = inf;
    for (int i = 0; i <= n - 4; i++) {
        ans = std::min(ans, d[i] + suf[i + 2]);
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