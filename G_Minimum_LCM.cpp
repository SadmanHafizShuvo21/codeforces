#include <bits/stdc++.h>
using ll = long long;

bool is_prime(ll n) {
    if (n <= 1 && n % 2 == 0) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

ll divisor(ll n) {
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return i;
        }
    }
    return n; 
}

void solve() {
    ll n;
    std::cin >> n;
    if (n % 2 == 0) {
        ll a = n / 2;
        std::cout << a << " " << a << "\n";
    } 
    else {
        if (is_prime(n)) {
            std::cout << 1 << " " << n - 1 << "\n";
        } 
        else {
            ll d = divisor(n);
            ll a = n / d;
            std::cout << a << " " << n - a << "\n";
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
