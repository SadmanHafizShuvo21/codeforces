#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll a, b, c, k;
    std::cin >> a >> b >> c >> k;
    lld l = 0, r = std::max({a, b, c});
    for (ll i = 0; i < 1000; i++) {
        lld m = (l + r) / 2;
        ll x = (ll)(a / m), y = (ll)(b / m), z = (ll)(c / m);
        if ((llx)x * y * z >= k) {
            l = m;
        }
        else {
            r = m;
        }
    }
    ll da = (ll)(a / l), db = (ll)(b / l), dc = (ll)(c / l);
    ll num = a, den = da;
    if ((lld)b / db < (lld)num / den) {
        num = b, den = db;
    }
    if ((lld)c / dc < (lld)num / den) {
        num = c, den = dc;
    }

    ll g = std::gcd(num, den);
    std::cout << num / g << " " << den / g << "\n";
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
