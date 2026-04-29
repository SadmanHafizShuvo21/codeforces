// 22 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, x, y;
    std::cin >> n >> x >> y;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    a.push_back(0);
    std::sort(a.begin(), a.end());
    ll ans = 0;
    for (ll i = 1; i < a.size(); i++) {
        if (a[i] - a[i - 1] > x) {
            if (a[i] - a[i - 1] > y) {
                std::cout << -1 << "\n";
                return;
            } 
            else {
                ans++;
            }
        }
    }
    std::cout << ans << "\n";
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