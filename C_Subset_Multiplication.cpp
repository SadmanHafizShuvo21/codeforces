#include <bits/stdc++.h>
using ll = long long;

void solve(){
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 1;
    for(int i = 0; i < n - 1; i++) {
        if (a[i + 1] % a[i] != 0) {
            ll x = a[i] / std::gcd(a[i], a[i + 1]);
            ans = std::lcm(ans, x);
        } 
    }
    std::cout << ans << '\n';
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
