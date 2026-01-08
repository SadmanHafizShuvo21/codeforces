#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
std::vector<int> primes;
void sieve(int n) {
    std::vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (ll j = 1LL * i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

void solve() {
    ll n, m;
    std::cin >> n >> m;

    auto it = std::find(primes.begin(), primes.end(), n);
    if (it != primes.end()) {
        ll pos = it - primes.begin();
        std::cout << (primes[pos + 1] == m ? "YES" : "NO") << "\n";
        return;
    }
    std::cout << "NO" << "\n";   
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    sieve(50);
    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}