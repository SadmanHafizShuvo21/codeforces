#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> q(n);
    for (int i = 0; i < n; i++) {
        std::cin >> q[i];
    }
    std::vector<ll> r(n);
    for (int i = 0; i < n; i++) {
        std::cin >> r[i];
    }

    std::vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        ll x = k - q[i];
        v[i] = (x < 0 ? -1 : x / (q[i] + 1));
    }

    std::sort(v.begin(), v.end());
    std::sort(r.begin(), r.end());

    ll ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        while (cnt < n && r[cnt] <= v[i]) {
            cnt++;
            ans++;
            break;
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}
