//22 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,ans=0,a=1;
    std::cin>>n;
    ans=n*(n+1)/2;
    while(a<=n){
        ans-=a*2;
        a*=2;
    }
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while (testcase--){
        solve();
    }
}

