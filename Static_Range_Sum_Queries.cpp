#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,q,sum=0;
    std::cin>>n>>q;
    std::vector<ll>a(n+1),preSum(n+1);
    for(int i=1;i<=n;i++){
        std::cin>>a[i];
        sum+=a[i];
        preSum[i]=sum;
    }
    // for(int i=1;i<=n;i++){
    //     std::cout<<preSum[i]<<" \n"[i==n];
    // }
    while(q--){
        ll a,b;
        std::cin>>a>>b;
        std::cout<<preSum[b]-preSum[a-1]<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}

