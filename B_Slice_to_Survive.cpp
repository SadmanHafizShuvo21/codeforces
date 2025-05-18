#include <bits/stdc++.h>
using ll = long long;

ll cal(ll x) {
    ll ans = 0;
    while (x > 1) {
        x = (x + 1) / 2;
        ans++;
    }
    return ans;
}
void solve() {
    int n, m, a, b;
    std::cin >> n >> m >> a >> b;
    std::cout << 1 + std::min((cal(m) + std::min(cal(a), cal(n - a + 1))), (cal(n) + std::min(cal(b), cal(m - b + 1)))) << "\n";
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
