#include<bits/stdc++.h>
using ll = long long int ;
 
void solve(){
    ll n;
    std::cin >> n ;
    std::map<ll,ll> mp;
    for(int i = 0; i < n; i++){
        ll a;
        std::cin >> a;
        mp[a]++;
    }
    
    std::vector<ll> count(n + 1, 0);
    for (auto x : mp) {
        for (int i = x.first; i <= n; i += x.first) {
            count[i] += x.second;
        }
    }
    std::cout << *max_element(count.begin(),count.end()) << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
}