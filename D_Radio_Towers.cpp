#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll mod = 998244353;
const ll error = 1e-6;

ll modpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

ll modinv(ll a) {
    return modpow(a, mod - 2);
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> dp(n + 2);
    dp[0] = 1;
    ll o = 1, e = 0;
    for (int i = 1; i <= n; i++) {
        if (i & 1) {
            dp[i] = o;
            e += dp[i];
            e %= mod;
        }
        else {
            dp[i] = e;
            o += dp[i];
            o %= mod;
        }
    }

    std::cout << (dp[n] % mod) * modinv(modpow(2, n)) % mod << "\n";
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
