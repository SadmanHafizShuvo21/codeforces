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
        std::cout << (a[0] % 2 == 0 ? "First" : "Second") << '\n';
        return;
    }

    int idx = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] != 1) { 
            idx = i; 
            break; 
        }
    }

    if (idx == -1){
        std::cout << (n % 2 == 0 ? "First" : "Second") << '\n';
    }
    else {
        std::cout << (idx % 2 == 0 ? "First" : "Second") << '\n';
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
