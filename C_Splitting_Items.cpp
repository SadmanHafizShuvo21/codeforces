#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,k;
    std::cin>>n>>k; 
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }  
    std::sort(a.begin(),a.end(),std::greater<int>());
    ll sum=0,gap=0;
    for(int i=0;i<n;i+=2){
        if (i+1<n){
            gap+= (a[i]-a[i+1]);
            sum+= (a[i]-a[i+1]);
        } 
        else{
            sum+= a[i];
        }
    }
    ll ans= std::min(gap,k);
    std::cout<<sum-ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while (testcase--){
        solve();
    }
}