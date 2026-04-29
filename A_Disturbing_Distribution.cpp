// 28 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        ans += (a[i] > 1 ? a[i] : 0);
    }

    std::cout << (a[n - 1] == 1 ? ans + 1 : ans) << '\n';
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