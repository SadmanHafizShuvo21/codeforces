#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.rbegin(), a.rend());

    std::vector<ll> pref(n+1);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + a[i];
    }
    
    while (q--) {
        ll x;
        std::cin>>x;
        ll ans = std::lower_bound(pref.begin(), pref.end(), x) - pref.begin();
        if (ans > n) {
            ans = -1;
        }
        std::cout << ans << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
