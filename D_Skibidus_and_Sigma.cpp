#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n,m;
    std::cin>>n>>m;
    std::vector<ll>a(n);
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll sum=0;
        for(ll j=0;j<m;j++){
            ll x;
            std::cin>>x;
            sum+=x;
            ans+=1LL*x*(m-j);
        }
        a[i]=sum;
    }
    std::sort(a.begin(), a.end());
    for(ll i= 0;i<n;i++){
        ans += a[i]*i*m;
    }
    std::cout<<ans<<"\n";
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
