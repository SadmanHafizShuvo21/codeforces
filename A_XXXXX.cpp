#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> a(n);

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        sum += a[i];
    }

    if (sum % x != 0) {
        std::cout << n << '\n';
        return;
    }

    ll l = -1, r = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] % x != 0) {
            l = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] % x != 0) {
            r = i;
            break;
        }
    }

    if (l == -1) {
        std::cout << -1 << '\n';
    } 
    else {
        std::cout << std::max(n - l - 1, r) << '\n';
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
