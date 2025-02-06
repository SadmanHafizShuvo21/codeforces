#include<bits/stdc++.h>
using ll = long long;

ll countDevisor(ll n){
    ll count=0;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
            if(i!=(n/i)){
                count++;
            }
        }
    }
    return count;
}

void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    ll ans = a[0];
    for(int i=1;i<n;i++){
        ans=std::gcd(ans,a[i]);
    }
    std::cout<<countDevisor(ans)<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}