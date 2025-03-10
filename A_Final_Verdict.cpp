#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll a,b;
    std::cin>>a>>b;
    ll ans=0;
    for(int i=0;i<a;i++){
        int x;
        std::cin>>x;
        ans+=x;
    }
    std::cout<<((a*b)==ans?"YES":"NO")<<"\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
