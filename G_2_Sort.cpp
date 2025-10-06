#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

void solve() {
    ll n, k;
    std::cin >> n >> k;

    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0, cur = 0;
    for (int i = 0; i < n - 1; i++) {
        if (2 * a[i + 1] > a[i]) {
            cur++;
            ans += (cur >= k);
        }
        else {
            cur = 0;
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}