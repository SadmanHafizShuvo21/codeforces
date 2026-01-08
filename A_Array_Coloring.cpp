#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i< n; i++) {
        std::cin >> a[i];
    }
    
    ll ans = std::accumulate(a.begin(), a.end(), 0LL);
    std::cout << (ans % 2 ? "NO" : "YES") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}