#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll a,b,c,d;
    std::cin>>a>>b>>c>>d;
    
    std::cout<<((a==b && b==c && c==d)?"Yes":"No")<<"\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
