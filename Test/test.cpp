#include<bits/stdc++.h>
using ll = long long;

void solve(){
    int n,k;
    std::cin>>n>>k;
    int mini=std::min(n,k);
    std::vector<int> v(k);
    for(int i=0;i<k;i++){
        int a,b;
        std::cin>>a>>b;
        a--;
        v[a]+=b;
    }
    std::sort(v.begin(),v.end(),std::greater());
    int ans = std::accumulate(v.begin(), v.begin() + mini, 0);
    std::cout<<ans<<"\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--){
        solve();
    }
}
