//09 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll x,y;
    std::cin>>x>>y;
    if(x >= 2*y){
        std::cout<<"Yes"<<"\n";
    }
    else{
        std::cout<<"No"<<'\n';
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}

