#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll x,y,k;
    std::cin>>x>>y>>k;
    x=(x+k-1)/k;
    y=(y+k-1)/k;
    std::cout<<std::max(2LL*x-1,2LL*y)<<"\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
