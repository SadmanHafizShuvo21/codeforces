#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve(){
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0;
    for (int k = 0; k < 2; k++) {
        ll g = 0;
        for (int i = k; i < n; i += 2) {
            g = std::__gcd(g, a[i]);
        }

        bool ok = true;
        for (int i = 1 - k; i < n; i += 2) {
            if (a[i] % g == 0) {
                ok = false;
            }
        }

        if (ok) {
            ans = g;
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
    // solve();
}
