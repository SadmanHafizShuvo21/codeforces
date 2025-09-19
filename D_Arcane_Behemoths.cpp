// Wrong submission
#include <bits/stdc++.h>
using ll = long long;
const ll MOD = 998244353;

void solve() {
    int n; std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());

    std::vector<ll> pow2(n + 1), pow3(n + 1);
    pow2[0] = pow3[0] = 1;
    for (int i = 1; i <= n; i++) {
        pow2[i] = pow2[i-1] * 2 % MOD;
        pow3[i] = pow3[i-1] * 3 % MOD;
    }
    ll m = (MOD + 1) / 2;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll x = a[i] % MOD;
        x *= pow2[n - 1 - i] % MOD;
        x *= (1 + pow3[i]) % MOD;
        x *= m % MOD;
        ans += x;
        ans %= MOD;
    }
    std::cout << ans << '\n';
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
