#include <bits/stdc++.h>
using ll = long long;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    ll minx = inf, maxx = -inf, miny = inf, maxy = -inf;
    for (int i = 0; i < n; i++) {
        ll x, y;
        std::cin >> x >> y;
        minx = std::min(minx, x);
        maxx = std::max(maxx, x);
        miny = std::min(miny, y);
        maxy = std::max(maxy, y);
    }

    ll ans = 2 * (maxx - minx + maxy - miny + 4);
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
