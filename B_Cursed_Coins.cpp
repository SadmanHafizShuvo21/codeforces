// 10 March 2026
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
    std::vector<ll> a;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        if (x > 0) {
            a.push_back(x);
        }
    }
    std::sort(a.rbegin(), a.rend());

    ll ans = 0;
    for (int i = 0; i < std::min(k, (ll)a.size()); i++) {
        ans += a[i];
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

