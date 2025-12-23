#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n, h, k;
    std::cin >> n >> h >> k;
    
    ll ans = 0, rem = 0;
    for (int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        if (a + rem > h) {
            ans++;
            rem = 0;
        }

        rem += a;
        ans += (rem / k);
        rem %= k;
    }

    // std::cout << rem << "\n";
    std::cout << (rem ? ans + 1 : ans) << "\n";
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
