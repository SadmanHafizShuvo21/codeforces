#include<bits/stdc++.h>
using ll = long long int ;
 
void solve(){
    ll n;
    std::cin >> n ;
    std::map<ll, ll> mp[4];
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll x, y;
        std::cin >> x >> y;
        ans += mp[0][x]++;
        ans += mp[1][y]++;
        ans += mp[2][x + y]++;
        ans += mp[3][x - y]++;
    }
    
    std::cout << 2 * ans << "\n";
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