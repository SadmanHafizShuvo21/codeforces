#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n, 0);
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            ll x;
            std::cin >> x;
            a[i] |= x;
        }
    }

    ll ans = a[0];
    for (ll i = 1; i < n; i++) {
        ans &= a[i];
    }
    std::cout << (ans > 0 ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
