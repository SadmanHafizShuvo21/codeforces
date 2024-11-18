//17 Nov 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::map<int,int>mp;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        mp[a[i]]++;
    }
    int ans=0;
    for(auto& entry : mp) {
        ans += entry.second / 2;
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



