#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
const int MOD = 1e9 + 7;
const ld PI = acosl(-1.0);

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.rbegin(), a.rend());
    ll cnt = 0, ans = 0;
    for (int i = 0; i < n; i += 2) {
        ans += a[i];
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
