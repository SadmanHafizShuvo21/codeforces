//07 July 2024 
#include<bits/stdc++.h>
using ll = long long;

void solve(){
    int n;
    std::cin >> n;
    ll ar[n][n];
    ll pf[n+1][n+1];
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            std::cin>>ar[i][j];
            pf[i][j]=ar[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }
    int q;
    std::cin>>q;
    while(q--){
        int a,b,c,d;
        std::cin>>a>>b>>c>>d;
        std::cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}