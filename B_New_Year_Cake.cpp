#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

ll check(ll a, ll b, bool ok) {
    ll wa = 0, da = 0;
    for (ll i = 0; i < 60; i++) {
        ll sz = 1LL << i;
        bool chk = (i % 2 == 0) ? ok : !ok;
        if (chk) {
            wa += sz;
        } 
        else {
            da += sz;
        }
        if (wa > a || da > b) {
            return i;
        }
    }
    return 60;
}

void solve() {
    ll a, b;
    std::cin >> a >> b;
    ll r1 = check(a, b, true);
    ll r2 = check(a, b, false);
    std::cout << std::max(r1, r2) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}
