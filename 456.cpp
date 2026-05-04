// 04 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll a[3][6];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            std::cin >> a[i][j];
        }
    }
    
    ll cnt = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            for (int k = 0; k < 6; k++) {
                std::vector<ll> v = {a[0][i], a[1][j], a[2][k]};
                std::sort(v.begin(), v.end());
                if (v[0] == 4 && v[1] == 5 && v[2] == 6) {
                    cnt++;
                }
            }
        }
    }

    lld ans = (lld)cnt / 216.0;
    std::cout << std::fixed << std::setprecision(10) << ans << '\n';
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