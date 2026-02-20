// 19 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;
ll fact[N];

void precompute() {
    fact[0] = 1;
    for (ll i = 1; i < N; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
}

void solve() {
    std::string s;
    std::cin >> s;

    ll x = 1, d = 0;
    for (int i = 0, j; i < s.size(); i = j) {
        j = i;
        while (j < s.size() && s[i] == s[j]) {
            j++;
        }
        d += (j - i - 1);          
        x = (x * (j - i)) % mod;
    }
    x = (x * fact[d]) % mod;
    std::cout << d << ' ' << x << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    precompute();
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}

