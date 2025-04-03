#include <bits/stdc++.h>
using ll = long long;
const int MOD = 998244353;
const int MAX_FACT = 5e5 + 10;

std::vector<ll> fact(MAX_FACT, 1);
std::vector<ll> inv_fact(MAX_FACT, 1);

ll mod_pow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = res * a % MOD;
        }
        a = a * a % MOD;
        b /= 2;
    }
    return res;
}

void precompute() {
    for (int i = 1; i < MAX_FACT; ++i) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    inv_fact[MAX_FACT - 1] = mod_pow(fact[MAX_FACT - 1], MOD - 2);
    for (int i = MAX_FACT - 2; i >= 0; --i) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    }
}

void solve() {
    int t;
    std::cin >> t;
    while (t--) {
        std::vector<int> c(26);
        int N = 0;
        for (int i = 0; i < 26; ++i) {
            std::cin >> c[i];
            N += c[i];
        }

        if (N == 0) {
            std::cout << 0 << '\n';
            continue;
        }

        int even_count = (N + 1) / 2;
        int odd_count = N / 2;

        std::vector<int> vals;
        for (int x : c) {
            if (x > 0) {
                vals.push_back(x);
            }
        }

        if (vals.empty()) {
            std::cout << 0 << '\n';
            continue;
        }

        // Now we handle the subset sum more efficiently
        int m = vals.size();
        std::vector<ll> dp(even_count + 1, 0);
        dp[0] = 1;

        for (int x : vals) {
            for (int i = even_count; i >= x; --i) {
                dp[i] = (dp[i] + dp[i - x]) % MOD;
            }
        }

        ll cnt = dp[even_count];
        if (cnt == 0) {
            std::cout << 0 << '\n';
            continue;
        }

        ll even_fact = fact[even_count];
        ll odd_fact = fact[odd_count];
        ll inv_prod = 1;
        for (int x : vals) {
            inv_prod = inv_prod * inv_fact[x] % MOD;
        }

        ll ans = even_fact * odd_fact % MOD;
        ans = ans * inv_prod % MOD;
        ans = ans * cnt % MOD;

        std::cout << ans << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    precompute();
    solve();

    return 0;
}
