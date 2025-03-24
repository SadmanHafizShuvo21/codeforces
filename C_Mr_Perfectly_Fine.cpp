#include<bits/stdc++.h>
using ll = long long;
const ll inf = 1E9+7;

void solve(){
    ll n,k;
    std::cin>>n;
    std::vector<ll>pref(4,inf);
    ll ans = inf;
    while(n--){
        ll x;
        std::string s;
        std::cin>>x>>s;
        ll t = (s[0]-'0')|(s[1]-'0')<<1;
        pref[t]=std::min(pref[t],x);
    }
    ans = std::min(pref[3],pref[1]+pref[2]);
    if(ans>=inf){
        std::cout<<-1<<"\n";
    }
    else{
        std::cout<<ans<<'\n';
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int testcase;
    std::cin>>testcase;
    while(testcase--){
        solve();
    }
}