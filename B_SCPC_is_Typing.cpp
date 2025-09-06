#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());
    std::cout << a[n / 2] << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}