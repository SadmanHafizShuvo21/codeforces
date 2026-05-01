// 02 May 2026
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

    ll ans = 0, cnt = 0, mx = -inf, top = inf;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] >= top) {
            cnt++;
        }
        else {
            top = a[i];
            mx = std::max(mx, cnt);
            cnt = 0;
        }
        ans += (a[i] - top);
    }

    std::cout << ans + std::max(mx, cnt) << "\n";
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


