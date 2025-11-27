#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {  
        std::cin >> a[i];
    }

    std::vector<ll> pref0(n + 1), pref1(n + 1), pref2(n + 1);
    for (int i = 0; i < n; i++) {
        pref0[i + 1] = pref0[i] + (a[i] % 3 == 0);
        pref1[i + 1] = pref1[i] + (a[i] % 3 == 1);
        pref2[i + 1] = pref2[i] + (a[i] % 3 == 2);
    }
    
    while(q--) {
        ll l, r;
        std::cin >> l >> r;
        ll x = pref0[r] - pref0[l - 1];
        ll y = pref1[r] - pref1[l - 1];
        ll z = pref2[r] - pref2[l - 1];
        std::cout << ((x > 0) || (y > 0 && z > 0) ? "Yes" : "No") << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}
