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

    if (n == 1) {
        std::cout << 0 << "\n";
        return;
    }

    std::sort(a.rbegin(), a.rend());
    std::cout << a[0] - a[n - 1] << " ";
    for (int i = 2; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << 0 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
