#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll a,b;
    std::cin>>a>>b;
    ll c = std::gcd(a,b);
    ll d = std::lcm(a,b);
    std::cout<<d<<" "<<c<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}