#include<bits/stdc++.h>
using ll = long long ;

void solve(){
    ll n;
    std::cin>>n;
    ll a[n],x[n+1];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    x[0]=1e8;
    for(int i=1;i<=n;i++){
        x[i]=x[i-1]+a[i-1];
    }
    for(int i=0;i<n;i++){
        std::cout<<x[i]<<" \n"[i==n-1];
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
    return 0;
}