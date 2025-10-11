#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    if (n % 2 == 1) {
        std::cout << n << " ";
        n--;
    }
     for (int i = 0; i < n; i += 4) {
        if (i + 2 < n && i + 3 < n) { 
            std::swap(a[i + 2], a[i + 3]);
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
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
