#include<bits/stdc++.h>
using ll = long long;
const ll N = 1e7+3;
std::vector<ll>pref(N,0);

void seive(){
    for(int i=2;i<N;i++){
        if(pref[i]==0){
            for(int j=i;j<N;j+=i){
                pref[j]++;
            }
        }
        pref[i]+=pref[i-1];
    }
}

void solve(){
    ll n;
    std::cin>>n;
    std::cout<<pref[n]<<"\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    seive();
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
}