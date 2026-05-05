// 05 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::pair<ll, ll>> a(n), b(n);
    for (int i = 0; i < n; i++) {
        ll x, y;
        std::cin >> x >> y;
        a[i] = {x, i};
        b[i] = {y, i};
    }

    std::sort(a.rbegin(), a.rend());
    std::sort(b.rbegin(), b.rend());
    std::cout << (a[0].second != b[0].second ? a[0].first + b[0].first : std::max(a[1].first + b[0].first, a[0].first + b[1].first)) << '\n';
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