//27 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll l,r,G;
    std::cin>>l>>r>>G;
    l=(l+G-1)/G;
    r/=G;
    for(ll i=r-l;i>=0;i--){
        for(ll a=l;a+i<=r;a++){
            ll b=a+i;
            if(std::gcd(a,b)==1){
                std::cout<<a*G<<" "<<b*G<<"\n";
                return;
            }
        }
    }
    std::cout<<-1<<" "<<-1<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

