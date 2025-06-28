#include <bits/stdc++.h>
using ll = long long;
const int MOD = 1e9 + 7;
const int N = 1e6 + 5; // Increased to handle up to 1e6 inputs

ll fact[N], rf[N], sum[N];

// Modular exponentiation (no STL replacement for this)
ll binpow(ll a, ll b) {
    ll res = 1;
    a %= MOD;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

// Precompute factorials, inverse factorials, and prefix sums of inverse factorials
void precompute() {
    fact[0] = rf[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }

    rf[N - 1] = binpow(fact[N - 1], MOD - 2);
    for (int i = N - 1; i >= 1; i--) {
        rf[i - 1] = rf[i] * i % MOD;
    }

    sum[0] = rf[0];
    for (int i = 1; i < N; i++) {
        sum[i] = (sum[i - 1] + rf[i]) % MOD;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    precompute();

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        ll ans = fact[n - 1] * sum[n - 1] % MOD;
        std::cout << ans << '\n';
    }
}
