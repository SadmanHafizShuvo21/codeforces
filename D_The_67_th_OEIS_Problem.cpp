// 04 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

std::vector<ll> primes;
void sieve() {
    std::vector<bool> isPrime(N, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (ll i = 2; i * i < N; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j < N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (ll i = 2; i < N; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

void solve() {
    ll n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << (i != n - 1 ? primes[i] * primes[i + 1] : primes[i]) << " \n"[i == n - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    sieve();
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    //solve();
}