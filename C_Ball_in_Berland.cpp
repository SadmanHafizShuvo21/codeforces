#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll a, b, k;
    std::cin >> a >> b >> k;

    ll cnt = 0;
    std::map<ll, ll> m1, m2;
    for (int i = 0; i < k; i++) {
        ll x;
        std::cin >> x;
        cnt += m1[x]++;
    }
    for (int i = 0; i < k; i++) {
        ll x;
        std::cin >> x;
        cnt += m2[x]++;
    }
    std::cout << (k * ( k - 1) / 2) - cnt << "\n";
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
