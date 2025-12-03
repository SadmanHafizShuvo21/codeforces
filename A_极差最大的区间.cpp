#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    auto mni = std::min_element(a.begin(), a.end());
    auto mxi = std::max_element(a.begin(), a.end());

    ll x = std::distance(a.begin(), mni);
    ll y = std::distance(a.begin(), mxi);
    if (x > y) {
        std::swap(x, y);
    }

    std::cout << x + 1 << " " << y + 1 << " " << std::llabs(a[x] - a[y]) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
