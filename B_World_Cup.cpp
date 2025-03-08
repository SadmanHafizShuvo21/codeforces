#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin>>n;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    ll ans=*std::min_element(a.begin(),a.end());
    while(a[ans%n]>ans){
        ans++;
    }
    std::cout<<1+(ans%n)<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}