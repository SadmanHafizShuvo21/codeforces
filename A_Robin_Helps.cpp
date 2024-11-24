//22 September 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,k,Robin=0,ans=0;
    std::cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        if(a[i]>=k){
            Robin+=a[i];
        }
        else if(a[i]==0 && Robin>0){
            Robin--;
            ans++;
        }
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
}

