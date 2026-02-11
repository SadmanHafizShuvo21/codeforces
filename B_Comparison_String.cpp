// 29 Jan 2026
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
    
    ll ans = 0, j = 0;
    for (int i = 0; i < n; i++) {
        while (j < n && s[i] == s[j]) {
            j++;
        }
        ans = std::max(ans, j - i);
    }
    std::cout << ans + 1 << "\n";
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