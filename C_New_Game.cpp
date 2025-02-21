#include<bits/stdc++.h>
using ll = long long;
const int MOD = int(1e9) + 7;

void solve() {
    ll n,k;
    std::cin>>n>>k;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::sort(a.begin(),a.end());
    ll ans=0,j=0;

    for(ll i=0;i<n;i++){
        j=std::max(i,j);
        while(j+1<n && (a[j+1]-a[j])<=1 && (a[j+1]-a[i])<k){
            j++;
            ans=std::max(ans,j-i+1);
        }
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
