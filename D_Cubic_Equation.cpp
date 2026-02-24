// 24 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;

void solve() {
    lld a, b;
    std::cin >> a >> b;

    auto f = [&](lld x) {
        return x * x * x + a * x + b;
    };

    lld l = -1, r = 0;
    while (f(l) > 0) {
        l *= 2;
    }

    for (int i = 0; i < 200; i++) {
        lld mid = (l + r) / 2.0;
        if (f(mid) > 0) {
            r = mid;
        }
        else {
            l = mid;
        }
    }

    std::cout << std::fixed << std::setprecision(6) << l << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}