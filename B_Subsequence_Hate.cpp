// 14 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    std::string s;;
    std::cin >> s;

    ll n = s.size();
    std::vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + s[i] - '0';
    }

    ll ans = inf;
    for (int i = 0; i <= n; i++) {
        ll dif = (pref[n] - pref[i]);
        ans = std::min({ans, n - i + (pref[i] - dif), i - (pref[i] - dif)});
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