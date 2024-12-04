//04 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int a,b,c;
    std::cin>>a>>b>>c;
    int x = std::min(a,b);
    std::cout<<0<<" "<<0<<" "<<x<<" "<<x<<"\n";
    std::cout<<0<<" "<<x<<" "<<x<<" "<<0<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

