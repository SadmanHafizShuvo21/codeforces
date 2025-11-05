#include <bits/stdc++.h>
using ll = long long;
const ll mod = 998244353;
const ll maxn = 300005;
std::vector<ll> fac(maxn), ifac(maxn);

ll Modpow(ll a, ll b) {
    ll r = 1;
    while (b) {
        if (b & 1) {
            r = r * a % mod;
        }
        a = a * a % mod;
        b >>= 1;
    }
    return r;
}

ll combination(ll n, ll r) {
    if (n < 0 || r < 0 || n < r) {
        return 0;
    }
    return (fac[n] * ifac[r]) % mod * ifac[n - r] % mod;
}

void precompute() {
    fac[0] = 1;
    for (int i = 1; i < maxn; i++) {
        fac[i] = fac[i - 1] * i % mod;
    }

    ifac[maxn - 1] = Modpow(fac[maxn - 1], mod - 2);
    for (int i = maxn - 2; i >= 0; i--) {
        ifac[i] = ifac[i + 1] * (i + 1) % mod;
    }
}

void solve() {
    ll n, k;
    std::cin >> n >> k;

    std::vector<std::pair<ll, ll>> arr;
    arr.reserve(n * 2);

    for (int i = 0; i < n; i++) {
        ll l, r;
        std::cin >> l >> r;
        arr.emplace_back(l, 1);
        arr.emplace_back(r + 1, -1);
    }

    std::sort(arr.begin(), arr.end());

    ll ans = 0, cnt = 0;
    for (auto &x : arr) {
        if (x.second == 1) {
            ans = (ans + combination(cnt, k - 1)) % mod;
            cnt++;
        } 
        else {
            cnt--;
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    precompute();
    solve();
}
