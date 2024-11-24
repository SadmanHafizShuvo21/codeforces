//13 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll x, y, z, k;
    std::cin >> x >> y >> z >> k;
    ll ans=0;
    for(int a=1;a<=x;a++){
        for(int b=1;b<=y;b++){
            ll step=k/a/b;
            if (a*b*step!=k || step>z) {
                continue;
            }
            ans = std::max(ans,1LL*(x - a + 1) * (y - b + 1) * (z - step + 1));
        }
    }
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


