#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n),b(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> a[i] >> b[i];
    }

    ll ans = 0, pt = 0, ps = 0;
    for (int i = 0; i < n; i++) {
        ll d = a[i] - pt;
        int p = (b[i] != ps);
        if (d % 2 == p) {
            ans += d;
        }
        else {
            ans += d - 1;
        }

        pt = a[i];
        ps = b[i];
    }
    ans += (m - pt);
    std::cout << ans << '\n';
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
