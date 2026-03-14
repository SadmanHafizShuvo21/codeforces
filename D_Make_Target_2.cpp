// 14 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

ll even(ll l, ll r) {
    if (l > r) return 0;
    return r/2 - (l-1)/2;
}

void solve() {
    ll L, R, D, U;
    std::cin >> L >> R >> D >> U;

    ll ans = 0;

    for (ll y = D; y <= U; y++) {
        ll ay = std::abs(y);

        ll l = std::max(L, -ay + 1);
        ll r = std::min(R, ay - 1);

        if (l <= r && ay % 2 == 0)
            ans += r - l + 1;

        ans += even(L, std::min(R, -ay));
        ans += even(std::max(L, ay), R);
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}