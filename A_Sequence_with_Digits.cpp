#include <bits/stdc++.h>
using ll = long long;

ll max_min_digit(ll x) {
    ll mn = 9, mx = 0;
    while (x > 0) {
        mn = std::min(mn, x % 10);
        mx = std::max(mx, x % 10);
        x /= 10;
    }
    return mx * mn;
}

void solve() {
    ll a, k;
    std::cin >> a >> k;
    k--;

    ll ans = a;
    while (k--) {
        ll res = max_min_digit(ans);
        if (res == 0) {
            break;
        }
        ans += res;
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
