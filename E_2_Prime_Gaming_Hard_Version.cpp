#include <bits/stdc++.h>
using ll = long long;
const int MOD = 1e9+7;

int n,k;
std::vector<int> good;
int dp[1<<20][2];
bool vis[1<<20][2];

int go(int mask,int t){
    if(__builtin_popcount(mask)==1) return __builtin_ctz(mask);
    if(vis[mask][t]) return dp[mask][t];
    vis[mask][t]=1;
    std::vector<int> idx;
    int pos=0;
    for(int i=0;i<n;i++) if(mask&(1<<i)){
        pos++;
        if(std::binary_search(good.begin(),good.end(),pos)) idx.push_back(i);
    }
    if(t==0){
        int best=-1;
        for(int id:idx){
            int nm=mask^(1<<id);
            int res=go(nm,1);
            if(best==-1||res>best) best=res;
        }
        return dp[mask][t]=best;
    }else{
        int best=-1;
        for(int id:idx){
            int nm=mask^(1<<id);
            int res=go(nm,0);
            if(best==-1||res<best) best=res;
        }
        return dp[mask][t]=best;
    }
}

ll modpow(ll a,ll e){
    ll r=1%MOD;
    a%=MOD;
    while(e){
        if(e&1) r=r*a%MOD;
        a=a*a%MOD;
        e>>=1;
    }
    return r;
}

void solve(){
    ll m;
    std::cin>>n>>m;
    std::cin>>k;
    good.resize(k);
    for(int i=0;i<k;i++) std::cin>>good[i];
    memset(vis,0,sizeof(vis));
    int finalIdx=go((1<<n)-1,0);
    std::vector<int> cnt(n,0);
    for(int mask=0;mask<(1<<n);mask++){
        if(__builtin_popcount(mask)==n){
            int idx=go(mask,0);
            cnt[idx]++;
        }
    }
    ll sumv=m%MOD*((m+1)%MOD)%MOD*((MOD+1)/2)%MOD;
    ll mpow=modpow(m,n-1);
    ll ans=0;
    for(int i=0;i<n;i++){
        if(cnt[i]){
            ans=(ans+cnt[i]%MOD*mpow%MOD*sumv%MOD)%MOD;
        }
    }
    std::cout<<ans<<"\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--) solve();
}
