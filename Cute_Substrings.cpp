// 25 April 2026
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

    auto ok = [&](ll l, ll r) {
        for (ll i = l; i <= r; i++) {
            ll pos = i - l; 

            if (pos % 2 == 0) {
                if (s[i] != 'u' && s[i] != 'o') {
                    return false;
                }
            } 
            else {
                if (s[i] != 'w') {
                    return false;
                }
            }
        }
        return true;
    };

    ll ans = 0;

    for (ll l = 0; l < n; l++) {
        for (ll r = l; r < n; r++) {
            if (ok(l, r)) {
                ans = std::max(ans, r - l + 1);
            }
        }
    }

    std::cout << (ans % 2 || ans == 0 ? ans : ans - 1) << "\n";
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