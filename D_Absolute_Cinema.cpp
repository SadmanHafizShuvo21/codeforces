// 16 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    
    ll m = (a[n] + a[1]) / (n - 1);
    std::vector<ll> sum(n + 1, 0);
    for (int i = 1; i < n; i++) {
        sum[i] = (a[i + 1] - a[i] + m) / 2;
    }

    std::vector<ll> pref(n + 1, 0);
    pref[1] = sum[1];
    for (int i = 2; i < n; i++) {
        pref[i] = sum[i] - sum[i - 1];
    }
    pref[n] = m - sum[n - 1];
    for (int i = 1; i <= n; i++) {
        std::cout << pref[i] << " \n"[i == n];
    }
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

