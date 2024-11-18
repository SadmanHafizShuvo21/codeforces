//18 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,a,b;
    std::cin>>n>>a>>b;
    if(a>=b){
        std::cout<<n*a<<"\n";
    }
    else{
        ll k=std::min(n,b-a);
        std::cout<<1LL*(b+b-k+1)*k/2 + 1LL*a*(n-k)<<"\n";
    }

}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


