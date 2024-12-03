//01 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,k;
    std::cin>>n>>k;
    int cnt=0,ans=k;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        if(x%2==0){
            cnt++;
        }
        if(x%k==0){
            ans=0;
        }
        ans = std::min(ans,k-x%k);
    }
    if(k==4){
        if(cnt>=2){
            ans=0;
        }
        else if(cnt==1){
            ans=std::min(ans,1);
        }
        else{
            ans=std::min(ans,2);
        }
    }
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

