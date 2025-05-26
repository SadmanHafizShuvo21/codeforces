#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (n == 1) {
        std::cout << 1 << "\n";
        return;
    }

    ll count = 1, last = a[0]; 
    for (int i = 1; i < n; i++) {
        if (a[i] >= last + 2) {
            count++; 
            last = a[i]; 
        }
    }
    
    std::cout << count << "\n";
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