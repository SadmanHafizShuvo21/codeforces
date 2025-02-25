#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n,k,p;
    std::cin>>n>>k>>p;
    k=std::abs(k);
    if(k>n*p){
        std::cout<<-1<<"\n";
    }
    else{
        std::cout<<(k+p-1)/p<<"\n";
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