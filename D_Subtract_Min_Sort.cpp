#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (ll i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            std::cout << "NO" <<"\n";
            return;
        }
        a[i] -= a[i - 1];  
    }

    std::cout << "YES" <<"\n";
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
