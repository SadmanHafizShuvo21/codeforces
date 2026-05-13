// 13 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    if (n % 6 != 2 && n % 6 != 5) {
        std::cout << -1 << "\n";
        return;
    }

    std::vector<ll> a = {1, 1, 0, k - 1, k - 1, 0};
    for (int i = 0; i < n; i++) {
        std::cout << a[i % 6] << " \n"[i == n - 1];
    }
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