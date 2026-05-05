// 05 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;
const lld pi = acos(-1);

void solve() {
    lld n;
    std::cin >> n;
    lld l = 0, r = pi / 2;
    for (int i = 0; i < 100; i++) {
        lld mid = (l + r) / 2;
        if (cos(mid) > mid * n) {
            l = mid;
        }
        else {
            r = mid;
        }
    }
    std::cout << std::fixed << std::setprecision(12) << l << '\n';
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