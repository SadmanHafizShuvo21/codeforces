#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (a == std::vector<ll>(n, 0)) {
        std::cout << 0 << "\n";
        return;
    }

    ll l = 0, r = n - 1;
    while(a[l] == 0) {
        l++;
    }
    while(a[r] == 0) {
        r--;
    }

    ll x = std::count(a.begin() + l, a.begin() + r + 1, 0LL);

    std::cout << (x == 0 ? 1 : 2) << "\n";
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
