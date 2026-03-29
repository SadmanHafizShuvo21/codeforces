// 30 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 2026;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll l = 0, r = 0;
        if (i > 0) {
            l = std::gcd(a[i - 1], a[i]);
        }
        if (i < n - 1) {
            r = std::gcd(a[i], a[i + 1]);
        }

        bool can = false;
        if (i == 0) {
            if (r < a[i]) {
                can = true;
            }
        } 
        else if (i == n - 1) {
            if (l < a[i]) {
                can = true;
            }
        } 
        else {
            ll g = std::gcd(l, r);
            ll L = l / g * r;
            if (L < a[i] && std::gcd(a[i - 1], L) == l && std::gcd(L, a[i + 1]) == r) {
                can = true;
            }
        }

        ans += can;
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