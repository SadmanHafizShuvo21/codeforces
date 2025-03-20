#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,m;
    std::cin>>n>>m; 
    std::vector<ll>a(m);
    for(int i=0;i<m;i++){
        std::cin>>a[i];
    }
    std::sort(a.begin(),a.end());
    ll ans=0;
    for(int i=1;i<n;i++){
        ll x=std::lower_bound(a.begin(), a.end(), n - i) - a.begin();
        ll y=lower_bound(a.begin(), a.end(), i) - a.begin();
        ll z=lower_bound(a.begin(), a.end(), std::max(i,n-i)) - a.begin();
        ans+=(m-x)*(m-y)-(m-z);
    }
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