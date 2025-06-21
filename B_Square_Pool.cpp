#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, s;
    std::cin >> n >> s;
    
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll a, b, c, d;
        std::cin>> a >> b >> c >> d;
        ans += ((a == b && c == d) || (a != b && c + d == s));
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
