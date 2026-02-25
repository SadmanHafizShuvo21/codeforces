// 25 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

ll check (ll s, ll m, ll mid) {
    ll rem = s;
    for (int j = 60; j >= 0 && rem; j--) {
        if ((m >> j) & 1LL) {
            rem -= std::min(mid, rem >> j) << j;
        }
    }
    return rem == 0;
}

void solve() {
    ll s, m;
    std::cin >> s >> m;

    ll l = 1, r = s, ans = -1;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(s, m, mid)) {
            ans = mid; 
            r = mid - 1;
        } 
        else {
            l = mid + 1;
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