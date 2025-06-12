#include <bits/stdc++.h>
using ll = long long;

ll bitcount(ll x) {
    return __builtin_popcount(x);
}

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0;
    std::vector<ll> cnt(64);
    for (int i = 0; i < n; i++) {
        ans += bitcount(a[i]);
        for (int j = 0; j < 64; j++) {
            if (~a[i] >> j & 1) {
                cnt[j]++;
            }
        }
    }
    
    for (int i = 0; i < 64; i++) {
        ll x = std::min(cnt[i], k >> i);
        ans += x;
        k -= x << i;
    }
    
    std::cout << ans << '\n';
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
