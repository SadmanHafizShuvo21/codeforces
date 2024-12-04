//03 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,k;
    std::cin>>n>>k;
    std::vector<int>v(n);
    for(int i=0;i<n;i++){
        std::cin>>v[i];
    }
    std::sort(v.rbegin(),v.rend());
    int ans=0;
    for(int i=0;i<n;i++){
        if(ans+v[i]>k){
            break;
        }
        ans+=v[i];
    }
    std::cout<<k-ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}



