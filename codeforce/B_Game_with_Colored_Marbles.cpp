//03 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        mp[x]++;
    }
    int ans=0,one=0;
    for(auto &a : mp){
        one+=(a.second==1);
        ans+=(a.second>=2);
    }
    std::cout<<ans+(one+1)/2*2<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}



