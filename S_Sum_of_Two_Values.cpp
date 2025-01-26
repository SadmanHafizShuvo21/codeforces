#include<bits/stdc++.h>
using ll = long long;

void solve(){
    int n,x;
    std::cin>>n>>x;
    std::map<int,int>mp;
    std::vector<int>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        int rem = x - a[i];
        if (mp.count(rem)) {
            std::cout<<mp[rem]+1<<" "<<i+1<<'\n';
            return ;
        }
        mp[a[i]]=i;
    }
    std::cout<<"IMPOSSIBLE"<<"\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}