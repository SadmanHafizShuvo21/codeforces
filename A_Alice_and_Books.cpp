//16 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,sum=0;
    std::cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    sum=a[n-1];
    std::sort(a,a+n);
    if(sum==a[n-1]){
        sum+=a[n-2];
    }
    else{
        sum+=a[n-1];
    }
    std::cout<<sum<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


