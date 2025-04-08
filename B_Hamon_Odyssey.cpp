#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    ll tar = ~0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        tar &= a[i];
    }

    if (tar != 0) {
        std::cout << 1 << "\n";
        return;
    }
    ll cnt = 0;
    ll cur = ~0; 

    for (int i = 0; i < n; i++) {
        cur &= a[i];
        if (cur == 0) {
            cnt++;
            cur = ~0;
        }
    }

    std::cout << cnt << "\n";
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
