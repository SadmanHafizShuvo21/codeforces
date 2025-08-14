#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k, b, s;
    std::cin >> n >> k >> b >> s;
    
    ll x = s / k;
    if (b > x) {
        std::cout << -1 << "\n";
        return;
    }

    std::vector<ll> a(n);
    a[0] = s;
    for (int i = 1; i < n; i++) {
        if (x > b && a[0] >= k) {
            x -= (a[0] % k != k - 1);
            a[0] -= k - 1;
            a[i] = k - 1;
        }
    }

    if (x != b) {
        std::cout << -1 << "\n";
        return;
    }

    std::sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " \n"[i == n - 1];
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
