// 29 Jan 2026
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
    std::vector<ll> a(n);
    
    ll ans = inf, cnt = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        cnt += (a[i] % 2 == 0);
        if (a[i] % k == 0) {
            ans = 0;
        }
        else {
            ans = std::min(ans, k - a[i] % k);
        }
    }

    if (ans == 0) {
        std::cout << 0 << "\n";
        return;
    }
    
    // 4 number condition that must be fulfill
    if (k == 4) {
        if (cnt >= 2) {
            ans = 0;
        }
        else if (cnt == 1) {
            ans = std::min(ans, 1LL);
        }
        else {
            ans = std::min(ans, 2LL);
        }
    }

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