#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> a(x);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll b;
        std::cin >> b;
        a[b % x]++;

        while (a[ans % x] > ans / x) {
            ans++;
        }
        std::cout << ans << "\n";
    }
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
