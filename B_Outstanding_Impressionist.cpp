#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin>>n;
    std::vector<ll>l(n),r(n);
    std::vector<ll>cnt(2*n);
    for(int i=0;i<n;i++){
        std::cin>>l[i]>>r[i];
        l[i]--;
        if(l[i]+1==r[i]){
            cnt[l[i]]++;
        }
    }
    std::vector<ll>pref(2*n + 1);
    for(int i=0;i<2*n;i++){
        pref[i+1]=pref[i]+(cnt[i]==0);
    }

    for(int i=0;i<n;i++){
        if(l[i]+1<r[i]){
            std::cout<<(pref[l[i]]!=pref[r[i]]);
        }
        else{
            std::cout<<(cnt[l[i]]==1);
        }
    }
    std::cout<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin>>t;
    while(t--)
    solve();
}
