#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin>>n;
    if(n%33==0){
        std::cout<<"YES"<<'\n';
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
