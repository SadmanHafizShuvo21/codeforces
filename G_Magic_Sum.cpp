#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,sum=0;
    std::cin>>n;
    sum=n*(n+1)/2;
    ll a=1;
    while(a<=n){
        sum-=2*a;
        a*=2;
    }
    std::cout<<sum<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

