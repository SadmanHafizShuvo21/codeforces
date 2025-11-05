#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    lld d, s, e;
    std::cin >> d >> s >> e;
    lld rem = d - s - e;
    lld ans = (s <= rem ? ((d - s) / d) * (s / rem) : (s + e) / d);
    std::cout << std::fixed << std::setprecision(10) << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
