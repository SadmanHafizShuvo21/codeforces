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

    std::vector<ll> pref(n + 1);
    for (int i = 1; i <= n; i++) {
        pref[i] += (pref[i - 1] + a[i - 1]);
    }

    // for (int i = 1; i <= n; i++) {
    //     std::cout << pref[i] << " \n"[i == n];
    // }
    while (q--) {
        ll l, r, val;
        std::cin >> l >> r >> val;
        ll minus = pref[r] - pref[l - 1];
        ll add = val * (r - l + 1);

        // std::cout << minus << " " << add << " " << pref[n] << "\n";
        std::cout << ((pref[n] - minus + add) % 2 ? "YES" : "NO") << "\n";
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
