// 14 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> a(x);
    ll ans = 0;
    while (n--) {
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

    solve();
}
