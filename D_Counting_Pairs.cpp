#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n,x,y;
    std::cin>>n>>x>>y;
    std::vector<ll>a(n);

    ll sum=0,ans=0;
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        sum+=a[i];
    }
    std::sort(a.begin(),a.end());
    std::swap(x,y);
    x=sum-x;
    y=sum-y;
    for(int i=0;i<n;i++){
        ll j =lower_bound(a.begin()+i+1,a.end(),x-a[i])-a.begin();
        ll k = upper_bound(a.begin()+i+1, a.end(),y-a[i])-a.begin();
        ans += std::max(k - j,0LL);   
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
