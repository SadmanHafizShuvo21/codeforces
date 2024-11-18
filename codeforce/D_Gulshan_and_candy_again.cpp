//24 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,x;
    std::cin>>n>>x;
    std::vector<int>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    int k,mn=INT_MAX;
    std::cin>>k;
    std::map<ll, ll> mp;

    while(k--){
        int b;
        std::cin>>b;
        b--; 
        if (mp[b] == 0)
        {
            mn = std::min(mn, a[b]);
            x -= a[b];
        }
        mp[b]++;   
    }
    std::cout<<x+1<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}