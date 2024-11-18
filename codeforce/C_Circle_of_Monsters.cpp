//16 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    ll a[n],b[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i]>>b[i];
    }
    ll min=10e18,ans=0;
    for(int i=0;i<n;i++){
        int ni = (i + 1) % n;
		ll val = std::min(a[ni], b[i]);
		ans += a[ni] - val;
		min = std::min(min, val);
    }
    ans+=min;
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while (testcase--){
        solve();
    }
}