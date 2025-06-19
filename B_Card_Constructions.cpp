#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    ll ans = 0;
    while (n >= 2) {
        ll h = 1;
        while ((3 * h + 4) * (h + 1) / 2 <= n) {
            h++;
        }
        n -= (3 * h * h + h) / 2;
        ans++;
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
}
