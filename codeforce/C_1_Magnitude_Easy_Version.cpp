//11 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,sum=0,mini=0;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        sum+=a[i];
        mini=std::min(sum,mini);
    }
    //std::cout<<sum<<" "<<mini<<"\n";
    std::cout<<sum-2*mini<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


