#include <bits/stdc++.h>
using ll = unsigned long long;
const ll MOD = 1e9 + 7;
ll modpow(ll a, ll b, ll MOD) {
    ll res = 1;
    while(b) {
        if (b & 1) {
            res *= a % MOD;
        }
        a *= a % MOD;
        b >>= 1;
    }
    return res;
}
void solve() {
    // ll n;
    // std::cin >> n;
    // ll ans = 0, cnt = 1;
    // while(n > 0) {
    //     ll d = n % 10;
    //     ans += (ll)d * cnt;
    //     n /= 10;
    //     cnt <<= 1;
    // }
    std::string s;
    std::cin >> s;
    ll n = s.size();

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (s[i] - '0') * modpow(2, n - i - 1, MOD);
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
