// 08 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = n - 2; i >= 0; i--) {
        if (a[i] + a[i + 1] > a[i]) {
            a[i] = a[i] + a[i + 1];
        }
    }

    std::sort(a.begin(), a.end());
    ll x = std::upper_bound(a.begin(), a.end(), 0) - a.begin();
    std::cout << n - x << "\n";
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