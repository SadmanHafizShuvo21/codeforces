#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n), b(k);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    for (int i = 0; i < k; i++) {
        std::cin >> b[i];
    }

    std::sort(a.rbegin(), a.rend());
    std::sort(b.begin(), b.end());

    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll l = 0;
    for (int i = 0; i < k; i++) {
        l += b[i];
        if (l <= n) {
            sum -= a[l - 1];
        }
    }
    
    std::cout << sum << "\n";
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