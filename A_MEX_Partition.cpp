#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;
const ll N = 1e7 + 6;

void solve() {
    ll n;
    std::cin >> n;
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        mp[x]++;
    }
    
    ll ans = 0;
    for (auto x : mp) {
        if (x.first == ans && x.second > 0) {
            ans++;
        }
        else {
            break;
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