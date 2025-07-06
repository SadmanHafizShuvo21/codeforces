#include <bits/stdc++.h>
using ll = long long;
std::vector<int> is_prime, primes;

void sieve(int n) {
    is_prime.assign(n + 2, true); 
    is_prime[0] = is_prime[1] = false;
    primes.clear();

    for (int i = 2; i * i <= n ; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

void solve() {
    ll n;
    std::cin >> n;
    if (n < 3) {
        std::cout << 1 << '\n';
        for (int i = 0; i < n; i++) {
            std::cout << 1 << " \n"[i == n - 1];
        }
        return;
    }

    std::cout << 2 << '\n';
    for (int i = 0; i < n; i++) {
        std::cout << (is_prime[i + 2] ? 1 : 2) << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    sieve(1e6 + 7); 
    solve();
}
