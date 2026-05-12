// 08 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0, x = n + 1, y = n + 1;
    for (int i = 0; i < n; i++) {
        if (x < y) {
            std::swap(x, y);
        }

        if (a[i] <= y) {
            y = a[i];
        }
        else {
            if (a[i] <= x) {
                x = a[i];
            }
            else {
                ans++;
                y = a[i];
            }
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