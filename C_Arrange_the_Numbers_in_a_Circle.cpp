// 18 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
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

    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    if (sum < 3) {
        std::cout << 0 << "\n";
        return;
    }

    ll sum2 = 0, r = 0, d = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 2) {
            sum2 += a[i];
            r += a[i] / 2;
            d++;
        } 
    }

    ll cnt1 = std::count(a.begin(), a.end(), 1);
    ll mx = (d == 1) ? r : (r - d);
    ll ans = sum2 + std::min(cnt1, mx);
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