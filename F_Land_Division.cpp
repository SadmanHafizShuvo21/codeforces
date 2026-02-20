// 19 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;

void solve() {
    ll a, b, c;
    std::cin >> a >> b >> c;

    ll dif = std::abs(a - b);
    lld ans = (lld)(dif * dif * c) / (4.0 * (a + b));
    std::cout << std::fixed << std::setprecision(12) << ans << '\n';
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

