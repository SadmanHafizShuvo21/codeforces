#include<bits/stdc++.h>
using ll = long long;   

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());

    ll r = n, ans = 0;
    for (ll i = n - 1; i >= 0; i--) {
        if (a[i] * (r - i) >= x) {
            r = i;
            ans++;
        }
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    std::cin >> t;
    while (t--) {   
        solve();
    }
}