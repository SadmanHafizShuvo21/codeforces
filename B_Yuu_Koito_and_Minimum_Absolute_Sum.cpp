#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (a[0] == -1 && a[n - 1] == 0) {
        a[0] = 0;
        a[n - 1] = 0;
    }
    else if (a[0] == -1) {
        a[0] =a[n - 1];
    }
    else if (a[n - 1] == -1) {
        a[n - 1] = a[0];
    }

    ll ans = llabs(a[0] - a[n - 1]);
    std::cout << ans << "\n";
    for (int i = 0; i < n; i++) {
        a[i] = (a[i] == -1 ? 0 : a[i]);
        std::cout << a[i] << " \n"[i == n - 1];
    }
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
