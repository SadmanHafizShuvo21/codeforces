#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k, m;
    std::cin >> n >> k >> m;

    ll t = n / k;
    ll l = std::min(n, t + m);
    ll x = std::min(1 + m, l);
    ll ans = (l + x) / 2;   
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
