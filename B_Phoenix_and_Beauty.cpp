#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];  
    }

    std::sort(a.begin(), a.end());
    a.erase(std::unique(a.begin(), a.end()), a.end());
    
    if (a.size() > k) {
        std::cout << -1 << "\n";
        return;
    }

    std::cout << n * k << "\n";
    for (int i = 0; i < n; i++) {
        for (auto x : a) {
            std::cout << x << " ";
        }
        for (ll j = a.size(); j < k; j++) {
            std::cout << 1 << " ";
        }
    }
    std::cout << "\n";
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