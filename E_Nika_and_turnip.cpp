#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end(), std::greater<ll>());

    lld sum = 0;
    lld c = 0;
    for (int i = 1; i <= n; i++) {
        lld div = (lld)a[i - 1] / (lld)i;
        lld y = div - c;
        lld t = sum + y;
        c = (t - sum) - y;
        sum = t;
    }
    std::cout << ((sum + e) >= (lld)x ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}