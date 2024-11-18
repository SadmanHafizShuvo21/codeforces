//07 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>v(n);
    for(int i=0;i<n;i++){
        std::cin>>v[i];
    }
    ll ans=1e9;
    for (int i = 1; i < n; i++) {
        ans = std::min(ans, std::max(v[i], v[i - 1]) - 1);
    }
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

