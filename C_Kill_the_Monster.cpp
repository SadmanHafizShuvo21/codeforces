#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-6;

void solve() {
    ll hc, dc, hm, dm;
    std::cin >> hc >> dc >> hm >> dm;

    ll k, w, a;
    std::cin >> k >> w >> a;

    for (int i = 0; i <= k; i++) {
        ll h = hc + a * i;
        ll d = dc + w * (k - i);

        ll cm = (hm + d - 1) / d;
        ll mc = (h + dm - 1) / dm;

        if (mc >= cm) {
            std::cout << "YES" << "\n";
            return;
        }
    }

    std::cout << "NO" << "\n";
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