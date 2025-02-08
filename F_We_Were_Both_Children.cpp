#include<bits/stdc++.h>
using ll = long long int ;
 
void solve(){
    ll n;
    std::cin >> n ;
    std::vector<ll>a(n);
    for(ll i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::map<ll,ll>mp;
    for(ll x : a){
        mp[x]++;
    }
    std::vector<ll> count(n + 1, 0);
    for (auto& [key, cnt] : mp) {
        for (int i = key; i <= n; i += key) {
            count[i] += cnt;
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