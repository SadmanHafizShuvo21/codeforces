#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, j, k;
    std::cin >> n >> j >> k;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    ll p = a[j - 1];
    ll w = 0, sm = 0, st = 0;
    for (ll x : a) {
        if (x < p) {
            w++;
        } 
        else if (x == p) {
            sm++;
        } 
        else {
            st++;
        }
    }
    ll x = w + (sm - 1);
    if (st > 0) {
        x += (st - 1);
    }
    std::cout << (x >= n - k ? "YES" : "NO") << '\n';
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
