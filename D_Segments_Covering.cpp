#include <bits/stdc++.h>
using ll = long long;
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
    
    std::vector<std::vector<std::pair<ll, ll>>> ends(m + 1);

    ll base = 1;
    for (ll i = 0; i < n; i++) {
        ll l, r, p, q;
        std::cin >> l >> r >> p >> q;
        ll denom = (q - p + MOD) % MOD; 
        base = base * denom % MOD;
        base = base * inv_mod(q, MOD) % MOD;
        ll w = p * inv_mod(denom, MOD) % MOD;
        if (r <= m) {
            ends[r].emplace_back(l, w);
        }
    }

    std::vector<ll> dp(m + 1, 0);
    dp[0] = 1;
    for (ll i = 1; i <= m; i++) {
        ll total = 0;
        for (const auto& seg : ends[i]) {
            ll l = seg.first, w = seg.second;
            total = (total + dp[l - 1] * w) % MOD;
        }
        dp[i] = total % MOD;
    }

    ll ans = base * dp[m] % MOD;
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}