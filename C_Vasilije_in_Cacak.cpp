#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k, x;
    std::cin >> n >> k >> x;

    ll mn = k * (k + 1) / 2;
    ll mx = k * (2 * n - k + 1) / 2;
    std::cout << (!(x >= mn && x <= mx) ? "NO" : "YES") << "\n";
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
