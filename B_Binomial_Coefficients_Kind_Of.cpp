#include<bits/stdc++.h>
using ll = long long;
const int MOD = int(1e9) + 7;

void solve() {
    ll n;
    std::cin>>n;
    std::vector<ll>a(n);
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            std::cin>>a[j];
        }
    }
    std::vector<ll>v(1+*std::max_element(a.begin(),a.end()),1);
    for(int i=1;i<v.size();i++){
        v[i]=(2LL*v[i-1])%MOD;
    }
    for(int i=0;i<n;i++){
        std::cout<<v[a[i]]<<"\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
