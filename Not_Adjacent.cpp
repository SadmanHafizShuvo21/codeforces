// 04 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;

void solve() {
    std::string s;
    std::cin >> s;
    
    ll ans = 0, cnt = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i - 1]) {
            cnt++;
        }
        else {
            ans += cnt * (cnt + 1) / 2;
            ans %= mod;
            cnt = 1;
        }
    }
    ans += cnt * (cnt + 1) / 2;
    ans %= mod;
    std::cout << ans << '\n';
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