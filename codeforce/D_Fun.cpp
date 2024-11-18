//29 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,k;
    std::cin>>n>>k;
    ll ans=0;
    for(ll i=1;i<=n;i++){
        for(ll j=1;i*j<=n && i+j<=k;j++){
            ans+=std::min((n-i*j)/(i+j),k-i-j);
        }
    }
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


