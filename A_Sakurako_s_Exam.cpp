#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll a,b;

    std::cin>>a>>b;


    if(a%2==0 && (a>0||(b%2==0))){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<'\n';
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
