#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    if (n < 0) {
        std::cout << 0 << "\n";
        return;
    }
    ll ans = 0, x = sqrtl(n);
    for (int i = -x; i <= x; i++) {
        ll y = sqrtl(n - i*i);
        ans += (2 * y + 1);
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
}
