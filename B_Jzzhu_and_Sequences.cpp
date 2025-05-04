#include <bits/stdc++.h>
using ll = long long;
const int MOD = 1e9 + 7;

void solve() {
    ll x, y, n;
    std::cin >> x >> y >> n;
    std::vector<ll> a(6);
    a[0] = x;
    a[1] = y;
    a[2] = y - x;
    a[3] = -x;
    a[4] = -y;
    a[5] = x - y;
    ll ans = a[(n - 1) % 6] % MOD;
    if (ans < 0) {
        ans += MOD;
    }
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
