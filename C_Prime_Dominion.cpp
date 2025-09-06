#include <bits/stdc++.h>
using ll = long long;
std::vector<int> primes;

void sieve(int n) {
    std::vector<bool> is_prime(n+1, true);
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
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::map<ll, ll> mp;
    ll ans = -1;
    for (ll i = 0; i < n; i++) {
        std::map<ll, ll> gcd;
        gcd[a[i]]++;

        for (auto &p : mp) {
            ll g = std::__gcd(p.first, a[i]);
            gcd[g] = std::max(gcd[g], p.second + 1);
        }

        mp = std::move(gcd);
        for (auto &p : mp) {
            ll x = p.first;
            if (std::binary_search(primes.begin(), primes.end(), x)) {
                ans = std::max(ans, p.second);
            }
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    sieve(2e5);
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
