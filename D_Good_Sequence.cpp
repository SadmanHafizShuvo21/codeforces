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
    int ans = 0;
    for(auto i=mp.begin();i!=mp.end();i++){
        int num=i->first;
        int count=i->second;
        if(count<num) {
            ans+=count;
        } 
        else{
            ans+=count-num;
        }
    }
    std::cout<<ans<<'\n';
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}