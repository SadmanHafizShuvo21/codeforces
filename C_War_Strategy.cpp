#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;

    ll l = k - 1, r = n - k; 
    ll mn = std::min(std::min(l, r), (m + 1) / 3);
    ll mx = std::min(std::max(l, r), (m + 1 - mn) / 2);
    std::cout << 1 + mn + mx << "\n";
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
