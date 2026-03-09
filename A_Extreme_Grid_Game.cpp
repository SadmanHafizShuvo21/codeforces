// 07 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;

    if (k == 1) {
        std::cout << ((n * m) % (k + 1) == 0 ? "Matthew" : "Munir") << "\n";
        return;
    }
    std::cout << "Munir" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}

