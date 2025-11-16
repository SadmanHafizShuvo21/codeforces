#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        std::vector<ll> v(3);
        for (int i = 0; i < 3; i++) {
            std::cin >> v[i];
        }
        std::sort(v.begin(), v.end());
        a[i] = v[0], b[i] = v[1], c[i] = v[2];
    }

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    std::sort(c.begin(), c.end());

    ll ans = a[0] * b[0] * c[0];
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
