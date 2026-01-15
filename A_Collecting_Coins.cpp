#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    std::vector<ll> a(3);
    for (int i = 0; i < 3; i++) {
        std::cin >> a[i];
    }

    ll n;
    std::cin >> n;
    ll mx = *std::max_element(a.begin(), a.end());
    // ll mn = *std::min_element(a.begin(), a.end());
    ll sum = n + std::accumulate(a.begin(), a.end(), 0LL);
    // std::cout << sum << "\n";
    // std::cout << mx << '\n';
    std::cout << (((sum / 3 >= mx) && sum % 3 == 0) ? "YES" : "NO") << "\n";
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
