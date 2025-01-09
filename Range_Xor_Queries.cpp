#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,q;
    std::cin>>n>>q;
    std::vector<ll>ar(n+1,0);
    std::vector<ll>preXor(n+1,0);
    for(int i=0;i<n;i++){
        std::cin>>ar[i];
        preXor[i+1]=preXor[i]^ar[i];
    }
    while(q--){
        ll a,b;
        std::cin>>a>>b;
        std::cout<<(preXor[b]^preXor[a-1])<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}

