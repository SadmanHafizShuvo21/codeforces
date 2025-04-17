#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll l = 0, r = 1e18;
    for (ll i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            r = std::min(r, (a[i] + a[i + 1]) / 2);
        } 
        else if (a[i] > a[i + 1]) {
            l = std::max(l, (a[i] + a[i + 1] + 1) / 2);
        }
    }

    if (l > r) {
        std::cout << -1 << '\n';
    } 
    else {
        std::cout << l << '\n';
    }
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
