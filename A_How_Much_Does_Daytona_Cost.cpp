#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    std::map<ll, ll> mp;
    for (int i = 0; i< n; i++) {
        std::cin >> a[i];
        mp[a[i]]++;
    }
    
    std::cout << (mp[k] == 0 ? "NO" : "YES") << "\n";
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