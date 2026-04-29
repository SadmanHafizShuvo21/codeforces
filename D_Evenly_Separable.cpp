// 27 April 2026
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
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + a[i - 1];
    }

    // std::cout << pref[n] << '\n';
    ll sum = pref[n], ans = inf;
    for (int i = 0; i < n - 1; i++) {
        ll l = pref[i + 1], num = 2 * l - sum, cur = n - 2 * (i + 1);
        if (cur == 0) {
            if (2 * l == sum) {
                ans = 0;
            }
            continue;
        }

        if (num % cur) {
            continue;
        }

        ll d = num / cur;
        if (d >= 0) {
            ans = std::min(ans, d);
        }
    }

    std::cout << (ans == inf ? -1 : ans) << '\n';
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