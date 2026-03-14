// 14 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, l, r;
    std::string s;
    std::cin >> n >> l >> r >> s;
    std::vector<std::vector<ll>> pref(26, std::vector<ll>(n + 1));
    for (int i = 1; i <= n; i++) {
        for (int c = 0; c < 26; c++) {
            pref[c][i] = pref[c][i - 1];
        }
        pref[s[i - 1] - 'a'][i]++;
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ll a = std::max(1LL, i - r);
        ll b = i - l;

        if (b < 1) {
            continue;
        }

        ll ch = s[i - 1] - 'a';
        ans += pref[ch][b] - pref[ch][a - 1];
    }
    std::cout << ans << "\n";
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