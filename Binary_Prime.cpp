#include <bits/stdc++.h>
using ll = long long;
std::vector<bool> is_prime(64, true);

void sieve(int n) {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void solve() {
    ll n;
    std::cin >> n;
    ll x = __builtin_popcountll(n);
    // std::cout << x << "\n";

    std::vector<ll> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    std::cout << (std::find(v.begin(), v.end(), x) != v.end() ? "Binary prime" : "-1") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    sieve(63);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
