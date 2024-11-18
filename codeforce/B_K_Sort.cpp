//03 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    ll premax=0,mx=0,sum=0;
    for(int i=0;i<n;i++){
        premax=std::max(premax,a[i]);
        ll dif=premax-a[i];
        sum+=dif;
        mx=std::max(mx,dif);
    }
    std::cout<<sum+mx<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


