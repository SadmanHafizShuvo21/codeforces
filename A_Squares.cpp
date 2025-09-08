#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const ll inf = 1e9 + 7;

void solve() {
    ll n;
    std::cin >> n;

    ll lx = -inf, ly = -inf, hx = inf, hy = inf;
    while(n--) {
        ll x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;

        lx = std::max(x1, lx);
        ly = std::max(y1, ly);
        hx = std::min(x2, hx);
        hy = std::min(y2, hy);
    }

    ll add = std::min(hx - lx, hy - ly);
    std::cout << lx << " " << ly << " " << lx + add << " " << ly + add << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
