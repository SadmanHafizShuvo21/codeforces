#include <bits/stdc++.h>
using ll = long long;
using ld = long double;

void solve() {
    ld n, m, y;
    std::cin >> n >> m >> y;
    ld nm = n * m;
    ld a = std::sqrt(y / nm);
    ld exp = std::exp2(a);
    ll ans = (ll)std::floor(exp);

    auto ok = [&](ll X) {
        ld l = std::log2((ld)X);
        return nm * (l * l) < y;
    };

    while (ans > 1 && !ok(ans)) {
        ans--;
    }

    while (ok(ans + 1)) {
        ans++;
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
