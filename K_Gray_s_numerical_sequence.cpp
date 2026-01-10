#include <bits/stdc++.h>
using ll = long long;
using ull = unsigned long long;
using llx = __int128;
const ull MOD = 1e9 + 9;

ll modpow(ll a, ll e, ll mod) {
    ll r = 1;
    a %= mod;
    while (e) {
        if (e & 1) {
            r = (llx)r * a % mod;
        }
        a = (llx)a * a % mod;
        e >>= 1;
    }
    return r;
}

void solve() {
    ll n;
    std::cin >> n;
    
    ll p = modpow(2, n + 1, MOD);
    ll q = ((ll)(n % MOD) + 2) % MOD;
    ll ans = (p - q) % MOD;
    
    std::cout << (ans < 0 ? ans + MOD : ans) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
