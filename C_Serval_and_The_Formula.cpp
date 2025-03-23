#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll x,y;
    std::cin>>x>>y;
    if(x==y){
        std::cout<<-1<<"\n";
        return;
    }
    ll ans=std::max(x,y);
    std::cout<<(1<<30)-ans<<"\n";
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