#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll k, l1, r1, l2, r2;
    std::cin >> k >> l1 >> r1 >> l2 >> r2;
    
    ll ans = 0;
    for (ll i = 1; i <= r2; i *= k) {
        ll r = r2 / i;
        ll l = (l2 + i - 1) / i;
        ans += std::max(0LL , std::min(r1, r) - std::max(l1, l) + 1);
    }
    
    std::cout << ans << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
