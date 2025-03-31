#include<bits/stdc++.h>
using ll = long long;

void solve (){
    ll n,k;
    std::cin>>n>>k;
    std::vector<ll>a(n);
    
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }

    std::sort(a.begin(),a.end());
    ll st=0,end=n-1;
    ll ans=0;

    while(st<=end){
        if(a[end]>=k){
            ans++;
            end--;
        }
        else if(st<end && a[st]+a[end]>=k){
            ans++;
            st++;
            end--;
        }
        else{
            st++;
        }
    }
    std::cout<<ans<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin>>t;
    while(t--)
    solve();
}