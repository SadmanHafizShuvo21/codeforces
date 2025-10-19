#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;
    
void solve(int t) {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0;
    for (int i = 1; i < n; i++) {
        ans = std::max(ans, std::abs(a[i] - a[i - 1]));
    }

    std::cout << "Case #" << t << ": " << ans << "\n" << std::flush;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    int t;
    std::cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
}