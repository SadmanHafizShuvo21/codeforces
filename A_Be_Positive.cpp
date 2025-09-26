#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        mp[a]++;
    }

    ll ans = mp[0] + 2 * (mp[-1] % 2);

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
