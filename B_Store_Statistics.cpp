// 24 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    
    std::vector<ll> a(m + 2, 0);
    for (int i = 0; i < n; i++) {
        ll l, r;
        std::cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }

    ll cur = 0;
    std::vector<ll> cnt(m);
    for (int i = 1; i <= m; i++) {
        cur += a[i];
        cnt[i - 1] = cur;
    }

    std::sort(cnt.begin(), cnt.end());
    lld ans = 0;
    if (m % 2) {
        ans = cnt[m / 2];
    } 
    else {
        ans = (cnt[m / 2 - 1] + cnt[m / 2]) / 2.0;
    }
    std::cout << std::fixed << std::setprecision(10) << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}