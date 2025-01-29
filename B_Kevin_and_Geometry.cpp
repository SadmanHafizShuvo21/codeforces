#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n,odd=0;
    std::cin >> n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++){
        std::cin>>v[i];
    }
    std::sort(v.begin(),v.end());
    ll k=-1;
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]){
            k=i;
        }
    }
    if(k==-1){
        std::cout<<-1<<"\n";
        return;
    }
    ll ans=v[k];

    v.erase(v.begin()+k);
    v.erase(v.begin()+k-1);
    
    // std::cout<<v.size()<<"\n";

    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1]+2*ans){
            std::cout<<ans<<" "<<ans<<" "<<v[i-1]<<" "<<v[i]<<"\n";
            return;
        }
    }
    std::cout<<-1<<"\n";
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
