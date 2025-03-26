#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int t;
    std::cin >> t;
    while (t--) {
        ll n, m, k;
        std::cin >> n >> m >> k;
        ll bench_length = (k + n - 1) / n; 
        ll ans = m / (m - bench_length + 1);
        std::cout << ans << '\n'; 
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
