//24 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    ll ans=1;
    if(n<=3){
        std::cout<<1<<"\n";
        return;
    }
    while(n>3){
        n/=4;
        ans*=2;
    }
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}