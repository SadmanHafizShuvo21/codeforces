#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;
    std::vector<ll> v(n);
    ll suf = 0, pref = 0;
    for (int i = 0; i < n; i++){
        std::cin >> v[i];
        if (v[i] < 0){
            suf += v[i];
        }
    }
    ll ans = -suf;
    for (int i = 0; i < n; i++){
        if (v[i] < 0){
            suf -= v[i];
        }
        else{
            pref += v[i];
        }
        ans = std::max(ans, pref - suf);
    }
    std::cout << ans << "\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}
