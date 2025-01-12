#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,a,b;
    std::cin>>n>>a>>b;
    if((a+b)%2==0){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

