// 23 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;
    
    ll ans = -inf;
    for (int i = 0; i < n; i++) {
        ll cnt  = 1;
        for (int j = 0; j < n - 1; j++) {
            cnt += (s[j] != s[j + 1]);
        }
        ans = std::max(ans, cnt);
        std::rotate(s.begin(), s.begin() + 1, s.end());
    }
    std::cout << ans << '\n';
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