#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), c(n);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        std::cin >> c[i];
    }

    ll ans = c[0];
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            ans += c[i];
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}
