// 3 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, x, y;
    char a, b;
    std::cin >> n >> a >> x >> b >> y;

    if (a == b) {
        std::cout << std::abs(x - y) << "\n";
        return;
    }
    std::cout << std::min((x + std::abs(int(a) - int(b)) + y), std::abs(x - (n + 1)) + std::abs(int(a) - int(b)) + std::abs(y - (n + 1))) << "\n";
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