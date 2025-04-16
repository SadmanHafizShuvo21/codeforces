#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    ll m, k;
    std::cin >> n >> m >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(),a.end());
    ll  ans = k * (k - 1) / 2;
    for (ll i = 0; i < n; i++) {
        ll t = std::min(m , k);
        k -= t;
        ans += (2 * a[i] - t + 1) * t / 2;
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
