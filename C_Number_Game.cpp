#include<bits/stdc++.h>
using ll = long long;

bool isprime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void solve() {
    ll n;
    std::cin >> n;

    bool ok ;
    if (n == 1) {
        ok = false;
    }
    else if (n % 2 == 1) {
        ok = true;
    }
    else if (n == 2) {
        ok = true;
    }
    else if ((n & -n) == n) {
        ok = false;
    }
    else if (n % 4 == 0) {
        ok = true;
    }
    else if (isprime(n / 2)) {
        ok = false;
    }
    else {
        ok = true;
    }
    std::cout << (ok ? "Ashishgup" : "FastestFinger") << "\n";
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

