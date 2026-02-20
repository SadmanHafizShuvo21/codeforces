// 20 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


ll digit_sum(ll n) {
    ll sum = 0;
    for (ll i = 1; i <= n; i *= 10) {
        ll h = n / (i * 10);
        ll d = (n / i) % 10;
        ll r = n % i;
        sum += (h * i * 45) + (d * (d - 1) / 2 * i) + (d * (r + 1));
    }
    return sum;
}
void solve() {
    ll a, b;
    std::cin >> a >> b;
    std::cout << digit_sum(b) - digit_sum(a - 1) << "\n";
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
