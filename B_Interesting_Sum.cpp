//04 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::sort(a.begin(),a.end());
    std::cout<<a[n-1]+a[n-2]-a[1]-a[0]<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}
