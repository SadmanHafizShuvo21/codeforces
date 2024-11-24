//11 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,k;
    std::cin>>k>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++){
        std::cin>>v[i];
    }
    std::sort(v.begin(),v.end());
    ll ans=0;
    for(int i=0;i<n-1;i++){
        ans+=(2*v[i]-1);
    }
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();

    return 0;
}


