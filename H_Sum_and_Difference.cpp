#include <bits/stdc++.h>
using ll = long long;

// Function to check if a number is prime
bool is_prime(ll x) {
    if (x <= 1) return false;
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

// Function to generate all primes up to a limit
std::vector<ll> generate_primes(ll limit) {
    std::vector<ll> primes;
    for (ll i = 2; i <= limit; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

void solve() {
    ll n, l, r;
    std::cin >> n >> l >> r;

    // Generate all primes up to the maximum possible difference (r - l)
    std::vector<ll> primes = generate_primes(r - l);
    std::set<ll> used_sums; // To store sums of consecutive elements
    std::vector<ll> a(n);

    // Try to construct the array
    a[0] = l;
    used_sums.insert(a[0] + a[0]); // Initially insert the first sum

    // Greedy approach to build the array
    for (ll i = 1; i < n; ++i) {
        bool found = false;
        for (ll prime : primes) {
            ll candidate = a[i - 1] + prime;
            if (candidate <= r && used_sums.find(a[i - 1] + candidate) == used_sums.end()) {
                a[i] = candidate;
                used_sums.insert(a[i - 1] + a[i]);
                found = true;
                break;
            }
        }

        if (!found) {
            std::cout << -1 << '\n';
            return;
        }
    }

    // Print the array if constructed successfully
    for (ll i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
