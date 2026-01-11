// 11 Jan 2026
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
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        a[i] = x - a[i];
    }

    std::sort(a.begin(), a.end());
    ll l = 0, r = n - 1, ans = 0;
    while(l < r) {
        if (a[l] + a[r] >= 0) {
            l++;
            r--;
            ans++;
        }
        else {
            l++;
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

















