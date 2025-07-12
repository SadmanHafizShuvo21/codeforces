#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, j, k;
    std::cin >> n >> j >> k;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    ll mx = *std::max_element(a.begin(), a.end());
    std::cout << (((mx == a[j - 1]) || k > 1)? "YES" : "NO") << '\n';
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
