#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> b = a;
    for (int i = 1; i < n; i++) {
        b[i] = std::max(b[i], b[i - 1]);
    }
    
    ll ans = (a[0] >= b[1]);
    for (int i = 1; i < n - 1; i += 2) {
        if (a[i + 1] >= b[i]) {
            ans += a[i + 1] - b[i] + 1;
        }
    }
    
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}