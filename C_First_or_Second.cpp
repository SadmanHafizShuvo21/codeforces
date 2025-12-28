#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> pref(n, 0), suf(n + 1, 0);
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + std::abs(a[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        suf[i] = suf[i + 1] + a[i];
    }

    ll ans = -inf;
    ans = std::max(ans, - suf[1]);
    for (ll i = 1; i < n; i++) {
        ll cur = a[0] + pref[i - 1] - suf[i + 1];
        ans = std::max(ans, cur);
    }

    std::cout << ans << '\n';
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