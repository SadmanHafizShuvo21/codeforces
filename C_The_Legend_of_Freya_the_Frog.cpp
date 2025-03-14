#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll x,y,k;
    std::cin>>x>>y>>k;
    std::cout<<std::max(2LL*((x+k-1)/k)-1,2LL*(y+k-1)/k)<<"\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
