#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n,r;
    std::cin>>n>>r;
    n--;
    if(r>n){
        std::cout<<1+n*(n+1)/2<<"\n";
    }
    else{
        std::cout<<r*(r+1)/2<<"\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
