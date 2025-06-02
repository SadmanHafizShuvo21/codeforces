#include <bits/stdc++.h>
using ll = long long;
const ll MOD = 998244353;

ll modpow(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) {
            res = (res * base) % mod;
        }    
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) {
        std::cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> q[i];
    }

    ll max_p = -1, max_q = -1, sum = 0;
    int j = 0, k = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] > max_p) {
            max_p = p[i];
            j = i;
        }
        if (q[i] > max_q) {
            max_q = q[i];
            k = i;
        }
        
        ll x1 = (i - j >= 0) ? q[i - j] : -1;
        ll x2 = (i - k >= 0) ? p[i - k] : -1;
        if (max_p > max_q || (max_p == max_q && x1 > x2)) {
            sum = (modpow(2, max_p, MOD) + modpow(2, x1, MOD)) % MOD;
        } 
        else {
            sum = (modpow(2, max_q, MOD) + modpow(2, x2, MOD)) % MOD;
        }
        std::cout << sum << " \n"[i == n - 1];
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
    return 0;
}