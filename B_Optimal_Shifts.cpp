#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;
    
    ll idx = -1, ans = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (s[i % n] == '1') {
            idx = i;
        }
        else if (i >= n) {
            ans = std::max(ans, i - idx);
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}
