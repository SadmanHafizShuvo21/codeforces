#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
std::vector<ll> primes;

void sieve(ll n) {
    std::vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (ll i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

bool is_prime(ll x) {
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    ll g = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        g = std::gcd(g, a[i]);
    }

    ll ans = -1;
    for (ll p : primes) {
        if (g % p != 0) {
            ans = p;
            break;
        }
    }

    if (ans == -1) {
        ll v = primes.back() + 2;
        while (true) {
            if (is_prime(v) && g % v != 0) {
                ans = v;
                break;
            }
            v++;
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    sieve(1e5); 

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
