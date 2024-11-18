//05 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,sum=0;
    std::cin>>n;
    std::vector<ll>a(n),b(n+1);
    for(ll i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(ll i=0;i<=n;i++){
        std::cin>>b[i];
    }
    ll ex=1e18;
    for(ll i=0;i<n;i++){
        sum+=std::abs(a[i]-b[i]);
        ex=std::min(ex,std::abs(a[i]-b[n]));
        ex=std::min(ex,std::abs(b[i]-b[n]));
        if (std::min(a[i], b[i]) <= b[n] && b[n] <= std::max(a[i], b[i])){
            ex=0;
        }
    }
    std::cout<<sum+ex+1<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

