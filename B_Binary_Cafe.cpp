//14 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,k;
    std::cin >> n>> k; 
    ll i=0;
    while(pow(2,i)<=n && i<k){
        i++;
    }
    ll ans=pow(2,i);
    ans=std::min(ans,n+1);
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


