#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        sum += a[i];
    }

    if (n == 1) {
        std::cout << sum << "\n";
        return;
    }
    if (n == 2) {
        std::cout << 0 << "\n";
        return;
    }
    
    ll ans = sum ^ (sum - a[0]) ^ (sum - a[n-1]) ^ (sum - a[0] - a[n-1]);
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