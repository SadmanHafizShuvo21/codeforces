#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;
    std::map<ll, ll> mp;
    
    for (ll i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        mp[x]++;
    }
    
    ll ans = 0;
    for (auto x : mp) {
        ll i = x.first;
        if (mp[i] > mp[i - 1]) {
            ans += mp[i] - mp[i - 1];
        }
    }
    std::cout << ans << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
