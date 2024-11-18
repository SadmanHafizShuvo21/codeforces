//15 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,k,q;
    std::cin>>n>>k>>q;

    std::vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        std::cin>>a[i];
    }

    ll ans = 0,len = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] <= q) {
            len++;
        }
        else{
            if (len >= k) {
                ans += (len - k + 1) * (len - k + 2) / 2;
            }
            len = 0;
        }
    }

    if (len >= k) {
        ans += (len - k + 1) * (len - k + 2) / 2;
    }

    std::cout << ans << "\n";   
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


