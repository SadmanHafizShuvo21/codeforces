#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n + 1);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll d = a[1] - a[0];
    bool ok = true;
    for (int i = 2; i < n; i++) {
        if (a[i] - a[i-1] != d) {
            ok = false;
            break;
        }
    }
    
    if (!ok) {
        std::cout << "NO\n";
        return;
    }

    ll y = a[0] - d;
    ll x = a[0] + ll(n) * d;
    ll r = n + 1;
    
    std::cout << ((y % r == 0 && x % r == 0 && y >= 0 && x >= 0) ? "YES" : "NO") << "\n";
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