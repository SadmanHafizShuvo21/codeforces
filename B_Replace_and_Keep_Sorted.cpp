#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n, q, k;
    std::cin >> n >> q >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    while(q--) {
        ll l, r;
        std::cin >> l >> r;
        l--;
        r--;
        ll x = a[r] - a[l] + k - 1;
        ll y = 2 * (r - l);
        std::cout << x - y << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}