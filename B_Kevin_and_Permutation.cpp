#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n,k;
    std::cin>>n>>k;
    std::vector<ll>a(n,0);
    ll cur=1;
    for(int i=k-1;i<n;i+=k){
        a[i]=cur++;
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=cur++;
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" \n"[i==n-1];
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
