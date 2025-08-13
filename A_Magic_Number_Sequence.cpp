#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    
    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll mx = a[0];
    
    if (sum % 2 == 1) {
        std::cout << -1 << "\n";
        return;
    }
    
    if (2 * mx > sum) {
        std::cout << -1 << "\n";
        return;
    }
    
    std::cout << (sum + 1) / 2 << "\n";
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