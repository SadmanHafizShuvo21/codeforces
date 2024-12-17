//17 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll m,a,b,c;
    std::cin>>m>>a>>b>>c;
    a = std::min(a,m);
    b = std::min(b,m);
    std::cout<<std::min(2*m,a+b+c)<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

