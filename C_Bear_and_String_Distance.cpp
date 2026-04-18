// 18 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k;
    std::string s;
    std::cin >> n >> k >> s;
    
    for (int i = 0; i < n; i++) {
        ll dist = std::max(s[i] - 'a', 'z' - s[i]);
        // std::cout << dist << " ";
        if (dist <= k) {
            k -= dist;
            s[i] = (s[i] - 'a' >= 'z' - s[i]) ? 'a' : 'z';
        }
        else {
            ll side = s[i] - 'a' > 'z' - s[i] ? 1 : 0;
            s[i] += (side == 0 ? k : -k);
            k = 0;
        }
    }

    std::cout << (k > 0 ? "-1" : s) << "\n";
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