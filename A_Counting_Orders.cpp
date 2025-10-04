#include <bits/stdc++.h>
using ll = long long;
const ll mod = 1e9 + 7;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    ll ans = 1;
    for (int i = 0; i < n; i++) {
        ans *= (std::lower_bound(b.begin(), b.end(), a[i]) - (b.begin() + i));
        ans %= mod;
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
