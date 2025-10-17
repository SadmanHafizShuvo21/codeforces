#include <bits/stdc++.h>
using ll = long long;
const ll N = 1e6 + 5;

std::vector<bool> is_prime;

void build_sieve(ll limit) {
    is_prime.assign(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    std::vector<ll> freq(N, 0);
    ll maxa = 0;

    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
        freq[a[i]]++;
        maxa = std::max(maxa, a[i]);
    }

    std::vector<ll> cnt(maxa + 1, 0);
    for (ll i = 1; i <= maxa; i++) {
        if (freq[i] == 0) continue;
        for (ll j = 1; j * j <= i; j++) {
            if (i % j == 0) {
                cnt[j] += freq[i];
                if (j != i / j) cnt[i / j] += freq[i];
            }
        }
    }

    // Precompute max_non_div[k] = largest value ≥ k not divisible by k
    std::vector<ll> max_non_div(maxa + 1, -1);
    for (ll v = maxa; v >= 1; v--) {
        if (freq[v] == 0) continue;
        for (ll k = 1; k <= v; k++) {
            if (v % k != 0 && max_non_div[k] == -1) {
                max_non_div[k] = v;
            }
        }
    }

    for (ll k = maxa; k >= 2; k--) {
        if (!is_prime[k]) continue;
        ll s = n - cnt[k];
        if (s < 2) continue;
        if (max_non_div[k] >= k) {
            std::cout << k << "\n";
            return;
        }
    }

    std::cout << "1\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    build_sieve(N - 1);

    while (t--) {
        solve();
    }
}
