#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;

void solve() {
    ll n, c;
    std::cin >> n >> c;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
        c -= 1LL * a[i] * a[i];
    }

    c /= 4;
    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll l = 0, r = 1e9 + 7;
    while (l < r) {
        ll mid = (l + r) / 2;
        llx cur = (llx)n * mid * mid + (llx)sum * mid;

        if (cur < c) {
            l = mid + 1;
        } 
        else {
            r = mid;
        }
    }
    std::cout << l << '\n';
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
