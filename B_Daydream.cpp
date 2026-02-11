// 25 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        mp[a[i]]++;
    }

    ll mx = 0;
    while(mp[mx]) {
        mx++;
    }
    
    if (mx != 2) {
        std::cout << "NO" << "\n";
        return;
    }

    std::cout << ((mp[0] > n/2 || mp[1] > n/2) ? "NO" : "YES") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}