#include <bits/stdc++.h>
using ll = unsigned long long;

void solve() {
    ll n;
    std::cin >> n;
    ll ans = 0, cnt = 1;
    while(n > 0) {
        ll d = n % 10;
        ans += (ll)d * cnt;
        n /= 10;
        cnt <<= 1;
    }
    std::cout << ans << '\n';
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
