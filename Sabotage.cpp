#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;
    
void solve() {
    ll n, x, k;
    std::cin >> n >> x >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.rbegin(), a.rend());

    ll ans = n + 1;
    for (int i = 0; i <= std::min(n, k); i++) {
        ll nx = 100 * i + x;
        ll cnt = 0;
        for (int j = i; j < n; j++) {
            cnt += (a[j] > nx);
        }
        ans = std::min(ans, cnt + 1);
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