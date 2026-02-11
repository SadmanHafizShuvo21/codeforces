// 10 Feb 2026
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
    std::vector<ll> a(n + 1), pref(n + 1), prefi(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
        prefi[i] = prefi[i - 1] + i * a[i];
    }

    std::vector<std::pair<ll, ll>> pr;
    pr.reserve(n);
    for (int i = 1; i <= n; i++) {
        ll cur = pref[i] * (i + 1) - 2 * prefi[i];
        pr.emplace_back(cur, i);
    }

    std::sort(pr.begin(), pr.end());
    for (int i = 0; i < n; i++) {
        std::cout << pr[i].second << " \n"[i == n - 1];
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
