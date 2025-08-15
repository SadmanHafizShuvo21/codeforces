#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i] %= k;
    }

    ll ans = 0;
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            continue;
        }

        ll x = mp[a[i]]++;
        ans = std::max(ans, 1LL * x * k + k - a[i] + 1);
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
