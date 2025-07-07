#include <bits/stdc++.h>
using ll = long long;
std::vector<int> is_prime, primes;

void sieve(int n) {
    is_prime.assign(n + 2, true);
    is_prime[0] = is_prime[1] = false;
    is_prime[2] = true; 
    primes.clear();
    for (int i = 3; i * i <= n; i += 2) {
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
    ll ans = 1;
    for (int a : primes) {
        if (1LL * a * a > n) {
            break;
        }
        if (n % a == 0) {
            ll cnt = 0;
            while (n % a == 0) {
                n /= a;
                cnt++;
            }
            cnt++;
            ans *= cnt;
        }
    }
    if (n > 1) {
        ans *= 2;
    }
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    sieve(1e6 + 7); 
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
