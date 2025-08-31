#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll a; 
        std::cin >> a;
        ans = std::max(ans, (a + 2) / 3);
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
