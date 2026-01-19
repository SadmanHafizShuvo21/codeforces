// 19 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    std::vector<ll> a(2);
    for (int i = 0; i < 2; i++) {
        std::cin >> a[i];
    }

    std::vector<std::vector<ll>> cnt(2, std::vector<ll>(3));
    for (int i = 0; i < 2; i++) {
        while(a[i] % 2 == 0) {
            cnt[i][0]++;
            a[i] /= 2;
        }
        while(a[i] % 3 == 0) {
            cnt[i][1]++;
            a[i] /= 3;
        }
        while(a[i] % 5 == 0) {
            cnt[i][2]++;
            a[i] /= 5;
        }
    }

    if (a[0] != a[1]) {
        std::cout << -1 << "\n";
        return;
    }
    
    ll ans = 0;
    for (int i = 0; i < 3; i++) {
        ans += std::abs(cnt[0][i] - cnt[1][i]);
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
