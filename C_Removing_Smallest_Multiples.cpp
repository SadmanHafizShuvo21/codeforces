// 26 Jan 2026
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
    s = '.' + s;
    
    ll ans = 0;
    std::vector<bool> vis(n + 1, false);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            if (s[j] == '1') {
                break;
            }
            if (!vis[j]) {
                vis[j] = true;
                ans += i;
            }
        }
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