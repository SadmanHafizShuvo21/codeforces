#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin>>n;
    ll ans=0;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        ans+=x;
    }
    std::cout<<ans-n+1<<"\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
