#include <bits/stdc++.h>
using ll = long long;
std::vector<int> is_prime, primes;

void sieve(int n) {
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    primes.clear();
    
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}


void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.rbegin(), a.rend());
    
    ll sum = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i - 1];
        sum -= primes[i - 1];
        if (sum >= 0) {
            ans = i;
        }
    }
    std::cout << n - ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    sieve(1E7);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
}