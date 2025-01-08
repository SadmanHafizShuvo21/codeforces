//07 Jan 2025
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll a,b;
    std::cin>>a>>b;
    ll x=pow(a,b);
    ll y=pow(b,a);
    std::cout<<x+y<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // int t;
    // std::cin>>t;
    // while(t--)
    solve();
}

