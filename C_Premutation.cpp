#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;
    std::vector<ll> v(n * (n - 1));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n - 1; j++) {
            ll x;
            std::cin >> x;
            x--;
            v[x] += j;
        }
    }
    
    std::vector<ll> p(n);
    std::iota(p.begin(), p.end(), 0);
    std::sort(p.begin(), p.end(), [&](ll i, ll j) {
        return v[i] < v[j]; 
    });
    
    for (int i = 0; i < n; i++) {
        std::cout << p[i] + 1 << " \n"[i == n - 1];
    }
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
