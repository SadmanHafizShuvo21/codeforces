#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    ll r = n;
    std::vector<ll> a;
    while (r) {
        a.push_back(r % 3);
        r /= 3;
    }

    ll ans = 0, l = a.size();
    for (ll i = 0; i < l; i++) {
        if (i == 0) {
            ans += a[i] * 3;
        } 
        else {
            ll x = pow(3, i + 1) + i * pow(3, i - 1);
            ans += a[i] * x;
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}