#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        a[i] = std::abs(x);
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (a[0] >= a[i]) {
            ans++;
        }
    }
    
    std::cout << ((ans <= ((n/2) + 1)) ? "YES" : "NO") << "\n";
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
