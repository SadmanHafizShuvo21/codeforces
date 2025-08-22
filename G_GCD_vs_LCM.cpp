#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, l;
    std::cin >> n >> l;
    std::vector<ll> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61};

    ll x = 1;
    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (x > l / primes[i]) {
            ok = false;
            break;
        }
        x *= primes[i];
    }

    if (n > primes.size() || !ok) {
        std::cout << -1 << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        std::cout << x / primes[i] << " \n"[i == n - 1];
    }
}



int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
