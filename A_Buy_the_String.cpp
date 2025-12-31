#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n, a[2], c;
    std::string s;
    std::cin >> n >> a[0] >> a[1] >> c >> s;

    ll x = std::min(a[0], a[1] + c);
    ll y = std::min(a[1], a[0] + c);
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += (s[i] == '1' ? y : x);
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
