#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;
    std::map<ll, ll> mp;

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        a = (a == 2 ? 1 : a);
        ans += mp[a]++;
    }
    std::cout << ans << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
