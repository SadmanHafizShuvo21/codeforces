#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
std::vector<ll> primes;
std::vector<bool> isPrime(1e6 + 1, true);

void sieve(ll n) {
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

void solve() {
    ll a, b;
    std::cin >> a >> b;
    
    std::cout << (((a == b - 2) && (isPrime[a] && isPrime[b])) ? "Y" : "N") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    sieve(1e6); 

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
