#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin>>n;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    ll i=*std::min_element(a.begin(),a.end());
    // std::cout<<i<<"\n";
    while(a[i%n]>i){
        i++;
    }
    std::cout<<1+(i%n)<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}