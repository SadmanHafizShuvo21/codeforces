#include <bits/stdc++.h>
using ll = long long;
const int N = std::sqrt(1e9);
std::vector<int> primes;

void sieve() {
    std::vector<bool> is_prime(N + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= N; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    static std::set<ll> s; 
    s.clear(); 

    for (int i = 0; i < n; i++) {
        ll x = a[i];
        for (ll p : primes) {
            if (p * p > x) { 
                break;
            }
            if (x % p == 0) {
                if (s.count(p)) {
                    std::cout << "YES" << "\n";
                    return;
                }
                s.insert(p);
                while (x % p == 0) {
                    x /= p;
                }
            }
        }
        if (x > 1) { 
            if (s.count(x)) {
                std::cout << "YES" << "\n";
                return;
            }
            s.insert(x);
        }
    }
    std::cout << "NO" << "\n";
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
}