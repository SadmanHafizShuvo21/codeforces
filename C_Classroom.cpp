#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    ll n, m;
    std::cin >> n >> m;

    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    ll ans = -inf, l = 0, r = 0;
    for (int i = 0; i < n - 1; i++) {
        ll dif = std::abs(a[i] - a[i + 1]);
        if (ans < dif) {
            ans = dif;
            l = i + 1, r = i + 2;
        }
    }

    std::cout << l << " " << r << "\n";
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
