#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const ll inf = 1e18;

ll fsum(std::vector<ll>& a) {
    ll s = 0;
    for (int i = 0; i < (int)a.size(); ++i) {
        if ((i + 1) & 1) {
            s += a[i];
        }
        else {
            s -= a[i];
        }
    }
    return s;
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll b = fsum(a), ans = b;
    ll mo = inf, Mo = -inf, me = inf, Me = -inf;
    for (ll i = 1; i <= n; i++) {
        if (i & 1) {
            mo = std::min(mo, i);
            Mo = std::max(Mo, i);
        } 
        else {
            me = std::min(me, i);
            Me = std::max(Me, i);
        }
    }
    if (mo != inf && Mo != -inf && Mo > mo) {
        ans = std::max(ans, b + (Mo - mo));
    }
    if (me != inf && Me != -inf && Me > me) {
        ans = std::max(ans, b + (Me - me));
    }

    ll p1 = -inf;
    for (ll r = 1; r <= n; ++r) {
        if ((r & 1) == 0) {
            ll c = b + (r + 2 * a[r - 1]);
            if (p1 != -inf) {
                ans = std::max(ans, c + p1);
            }
        } 
        else {
            p1 = std::max(p1, -r - 2 * a[r - 1]);
        }
    }
    ll p2 = -inf;
    for (ll r = 1; r <= n; ++r) {
        if (r & 1) {
            ll c = b + (r - 2 * a[r - 1]);
            if (p2 != -inf) {
                ans = std::max(ans, c + p2);
            }
        } 
        else {
            p2 = std::max(p2, -r + 2 * a[r - 1]);
        }
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
}
