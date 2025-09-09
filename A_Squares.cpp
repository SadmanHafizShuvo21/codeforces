#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const ll inf = 1e9;

void solve() {
    ll n;
    std::cin >> n;

    ll lx = -inf, ly = -inf, hx = inf, hy = inf;
    while(n--) {
        ll x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        hx = std::max(hx, x2);
        hy = std::max(hy, y2);
    }

    ll add = std::max({hx, hy, 1LL}) + inf;
    std::cout << 0LL << " " << 0LL << " " << add << " " << add << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
