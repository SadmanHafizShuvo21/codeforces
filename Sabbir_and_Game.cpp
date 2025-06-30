#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    ll lo = 0, hi = 1e18, ans = -1;
    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        ll p = 0;
        bool ok = true;
        for (ll i = 0; i < n; i++) {
            p += a[i];
            if (mid + p <= 0) {
                ok = false;
                break;
            }
        }
        if (ok) {
            ans = mid;
            hi = mid - 1;
        } 
        else {
            lo = mid + 1;
        }
    }
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}