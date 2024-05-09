// 09 May 2024
#include<bits/stdc++.h>
using ll = long long int;

void solve(){
    ll n,d;
    std::cin>>n>>d;
    ll a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::sort(a,a+n);
    int cnt=0,st=1,ans=0;
    while(st<n){
        if(a[st]-a[cnt]<=d){
            ans+=(st-cnt);
            st++;
        }
        else{
            cnt++;
        }
    }
    std::cout<<2*ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
    return 0;
}