//20 May 2024
#include<bits/stdc++.h>
using ll = long long;
#define pb push_back
void solve(){
    ll i,n,k,temp,cnt=0;
    std::vector<int> walks;
    std::cin>>n>>k;
    std::cin>>temp;
    walks.pb(temp);
    for(i=1;i<n;i++){
        std::cin>>temp;

        if(temp+walks[i-1]<k){
            walks.pb(k-walks[i-1]);
            cnt+=k-(temp+walks[i-1]);
        }
        else
            walks.pb(temp);
    }
    std::cout<<cnt<<"\n";
    for(int i=0;i<n;i++){
        std::cout<<walks[i]<<" ";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}

