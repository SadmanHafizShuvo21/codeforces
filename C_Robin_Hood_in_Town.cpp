//22 September 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,sum=0;
    std::cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        sum+=a[i];
    }
    std::sort(a,a+n);
    if(n<=2){
        std::cout<<-1<<"\n";
        return;
    }
    ll ans = std::max(0LL,2LL*n*a[n/2]+1-sum);
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

