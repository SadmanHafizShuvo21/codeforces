#include <bits/stdc++.h>
using ll = long long;

bool is_prime(ll n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (ll d = 3; d * d <= n; d += 2) {
        if (n % d == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    ll x, k;
    std::cin >> x >> k;
    if (k == 1) {
        std::cout << (is_prime(x) ? "YES" : "NO") << "\n";
    } 
    else {
        if (x == 1 && k == 2) {
            std::cout << "YES" << "\n";
        } 
        else {
            std::cout << "NO" << "\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
