// 5 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k, x;
    std::string s;
    std::cin >> n >> k >> x >> s;
    x--;
    std::reverse(s.begin(), s.end());
    ll cnt = 0;
    std::string ans;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            ans += std::string(x % (cnt * k + 1), 'b');
            x /= (cnt * k + 1);
            ans += s[i];
            cnt = 0;
        }
        else {
            cnt++;
        }
    }
    ans += std::string(x % (cnt * k + 1), 'b');
    std::reverse(ans.begin(), ans.end());
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
