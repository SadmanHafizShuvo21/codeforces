#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, a, b, c;
    std::cin >> n >> a >> b >> c;
    
    ll ans = 0;
    for (int i = 0; i <= c; i++) {
        for (int j = 0; j <= b; j++) {
            ll r = 2 * (n - 2 * i - j);
            if (r >= 0 && r <= a) {
                ans++;
            }
        }
    }
    
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}