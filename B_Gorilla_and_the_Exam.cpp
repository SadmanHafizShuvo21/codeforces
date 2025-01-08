//06 Jan 2025
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,k;
    std::cin>>n>>k;
    std::map<int,int>mp;
    std::vector<int>v(n);
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        mp[x]++;
    }
    for(auto a : mp){
        v.push_back(a.second);
    }
    std::sort(v.begin(),v.end());
    int l = v.size();
    for(int i=0;i<l;i++){
        if(v[i]>k){
            std::cout<<l-i<<"\n";
            return;
        }
        k-=v[i];
    }
    std::cout<<1<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

