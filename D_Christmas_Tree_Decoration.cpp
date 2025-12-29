#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;
const ll MOD = 998244353;

ll modpow(ll a, ll e) {
    ll r = 1;
    a %= MOD;
    while (e) {
        if (e & 1) r = r * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return r;
}

ll modinv(ll a) {
    return modpow(a, MOD - 2);
}

void check(ll n, std::vector<ll>& fact, std::vector<ll>& ifact) {
    fact.assign(n + 2, 1);
    ifact.assign(n + 2, 1);
    fact[0] = 1;
    for (ll i = 1; i <= n + 1; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    ifact[n + 1] = modinv(fact[n + 1]);
    for (ll i = n; i >= 0; i--) {
        ifact[i] = ifact[i + 1] * (i + 1) % MOD;
    }
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1);
    for (ll i = 0; i <= n; i++) {
        std::cin >> a[i];
    }
    std::vector<ll> fact, ifact;
    check(n, fact, ifact);
    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll q = sum / n;
    ll r = sum % n;

    ll cnt = 0, m = 0;
    for (ll i = 1; i <= n; i++) {
        ll d0 = std::max(0LL, q - a[i]);
        ll d1 = std::max(0LL, q + 1 - a[i]);
        cnt += d0;
        m += (d1 - d0 == 1);
    }

    ll rem = a[0] - cnt;
    if (rem < 0) {
        std::cout << 0 << '\n';
        return;
    }

    auto nCr = [&](ll n, ll r) -> ll {
        if (r < 0 || r > n) {
            return 0;
        }
        return fact[n] * ifact[r] % MOD * ifact[n - r] % MOD;
    };

    ll ans = 0;
    ll x = std::min(m, rem);
    for (ll i = 0; i <= x; i++) {
        ans = (ans + nCr(m, i) * nCr(n - m, r - i)) % MOD;
    }

    ans = ans * fact[r] % MOD * fact[n - r] % MOD;
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}
