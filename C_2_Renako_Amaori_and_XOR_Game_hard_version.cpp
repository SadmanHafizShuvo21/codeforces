#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {  
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) { 
        std::cin >> b[i];
    }
    
    ll x = 0;
    for (int i = 0; i < n; i++) { 
        x ^= (a[i] ^ b[i]);
    }

    if (x == 0) {
        std::cout << "Tie" << "\n";
        return;
    }

    ll hb = 31;
    while (hb >= 0 && ((x >> hb) & 1) == 0) {  
        hb--;
    }

    ll l = -1;
    for (int i = 0; i < n; i++) {
        if (((a[i] ^ b[i]) >> hb) & 1) {
            l = i + 1;
        }
    }

    if (l == -1) {
        std::cout << "Tie" << "\n";
        return;
    }
    std::cout << (l % 2 ? "Ajisai" : "Mai") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}
