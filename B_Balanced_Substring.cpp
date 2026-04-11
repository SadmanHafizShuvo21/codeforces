// 09 April 2026
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
    
    ll ans = 0, cnt = 0;
    std::map<ll, ll> mp;
    mp[0] = -1;
    for (int i = 0; i < n; i++) {
        cnt += (s[i] == '1' ? 1 : -1);
        if (mp.count(cnt)) {
            ans = std::max(ans, i - mp[cnt]);
        }
        else {
            mp[cnt] = i;
        }
    }
    
    for (auto &[x, y] : mp) {
        std::cout << x << " " << y << "\n";
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