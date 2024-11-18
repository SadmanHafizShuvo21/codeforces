//08 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll x,y;
    std::cin>>x>>y;
    x^=y;
    // std::cout<<x<<" "<<-x;
    std::cout<<(x & -x )<<"\n";
    
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    std::cout<<(20000*20001)/2<<"\n";
    while(testcase--)
    solve();
}

