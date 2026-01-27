// 27 Jan 2026
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
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());
    std::vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
        pref[i + 1] = pref[i] + b[i];
    }

    ll ans = -inf;
    for (int i = 0; i < n; i++) {
        ll r = std::upper_bound(pref.begin(), pref.end(), n - i) - pref.begin();
        ans = std::max(ans, a[i] * (r - 1));
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