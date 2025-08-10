#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, h;
    std::cin >> n >> h;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll l = 1, r = h;
    while(l < r) {
        ll mid = (l + r) / 2;
        ll ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans += std::min(mid, a[i + 1] - a[i]);
        }

        ans += mid;
        if (ans >= h) {
            r = mid;
        }
        else {
            l = mid + 1;
        }
    }
    std::cout << l << "\n";
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
