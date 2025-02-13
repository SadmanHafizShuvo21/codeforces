#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll x,y;
    std::cin>>x>>y;
    if(y-x==1){
        std::cout<<"Yes"<<"\n";
        return;
    }
    ll ans=x-y+1;
    if(ans%9==0 && ans>=0){
        std::cout<<"Yes"<<"\n";
    }
    else{
        std::cout<<"No"<<"\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
