#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    ll sum=std::accumulate(a.begin(),a.end(),0LL);
    std::cout <<sum-2*a[n-2] << "\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
