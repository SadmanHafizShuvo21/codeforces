#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve(){
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end(), std::greater());
    
    ll ans = 0;
    for (int i = 0; i < k; i++) {
        ans += a[i + k] / a[i];
    }
    ans += std::accumulate(a.begin() + 2 * k, a.end(), 0);
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
    // solve();
}
