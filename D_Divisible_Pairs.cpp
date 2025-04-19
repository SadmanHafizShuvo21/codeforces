#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x, y;
    std::cin >> n >> x >> y;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::map<std::pair<ll, ll>, ll> freq;
    ll ans = 0;

    for (ll i = 0; i < n; i++) {
        ans += freq[{(x - a[i] % x) % x, a[i] % y}];
        freq[{a[i] % x, a[i] % y}]++;
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
