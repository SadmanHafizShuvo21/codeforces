#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-6;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.rbegin(), a.rend());

    lld sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (static_cast<lld>(a[i]) / static_cast<lld>(i + 1));
    }
    std::cout << ((sum + e) > static_cast<lld>(x) ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}