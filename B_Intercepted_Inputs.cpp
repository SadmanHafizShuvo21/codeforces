//17 Nov 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
     ll k;
    std::cin >> k;
    std::map<ll, ll> mp;
    for(int i=0;i<k;i++){
        ll x;
        std::cin >> x;
        mp[x]++;
    }
    for (ll i = 1; i * i <= k; i++){
        ll t = k - 2;
        if (t % i == 0){
            if (t / i == i){
                if (mp[i] > 1){
                    std::cout << i << ' ' << i << '\n';
                    return;
                }
            }
            else{
                if (mp[i] > 0 && mp[t / i] > 0){
                    std::cout << i << ' ' << t / i << '\n';
                    return;
                }
            }
        }
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



