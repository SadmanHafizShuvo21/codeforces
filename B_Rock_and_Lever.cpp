#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, ans = 0;
    std::cin >> n;

    std::vector<ll>a(32);
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        ans += a[std::__lg(x)]++;
    }
    std::cout << ans << '\n';
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
