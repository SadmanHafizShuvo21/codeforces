// 20 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;
const ll MOD = 998244353;

ll pow_mod(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) res = res * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return res;
}

ll inv_mod(ll a, ll mod) {
    return pow_mod(a, mod - 2, mod);
}

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::vector<std::pair<ll, ll>>> a(m + 1);
 
    ll b = 1;
    for (ll i = 0; i < n; i++) {
        ll l, r, p, q;
        std::cin >> l >> r >> p >> q;
        ll x = (q - p + MOD) % MOD; 
        b = b * x % MOD;
        b = b * inv_mod(q, MOD) % MOD;
        ll w = p * inv_mod(x, MOD) % MOD;
        if (r <= m) {
            a[r].emplace_back(l, w);
        }
    }
 
    std::vector<ll> dp(m + 1, 0);
    dp[0] = 1;
    for (ll i = 1; i <= m; i++) {
        ll all = 0;
        for (auto v : a[i]) {
            ll l = v.first;
            ll w = v.second;
            all = (all + dp[l - 1] * w) % MOD;
        }
        dp[i] = all % MOD;
    }
 
    ll ans = b * dp[m] % MOD;
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}