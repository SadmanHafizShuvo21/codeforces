#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    ll ans=2;
    while(true){
        std::set<ll>st;
        for(ll i=0;i<n;i++){
            st.insert(a[i]%ans);
        }
        if(st.size()==2){
            std::cout<<ans<<"\n";
            return;
        }
        ans*=2LL;
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

