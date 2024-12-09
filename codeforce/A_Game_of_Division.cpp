//09 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,k;
    std::cin>>n>>k;
    int a[n];
    std::map<int,int>mp;
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        a[i]%=k;
        mp[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[a[i]]==1){
            std::cout<<"YES"<<"\n";
            std::cout<<i+1<<"\n";
            return;
        }
    }
    std::cout<<"NO"<<'\n';
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

