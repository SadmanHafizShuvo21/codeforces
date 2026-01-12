#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k;
    std::cin >> n >> k;

    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    std::sort(a.begin(), a.end());
    std::sort(b.rbegin(), b.rend());

    for (int i = 0; i < n && k > 0; i++) {
        if (a[i] < b[i]) {
            std::swap(a[i], b[i]);
            k--;
        }
    }

    ll ans = std::accumulate(a.begin(), a.end(), 0LL);
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
    // solve();
}

















