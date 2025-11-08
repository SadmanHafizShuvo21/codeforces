#include <bits/stdc++.h>
using ll = long long;

bool is_possible(const std::vector<ll>& c, ll m, ll d) {
    ll n = c.size();
    ll l = m / n, h = l + d, sum = 0;
    for (ll ci : c) {
        sum += std::min(ci, h);
    }
    return sum >= m;
}

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> c(n);
    for (int i = 0; i < n; i++) {
        std::cin >> c[i];
    }

    ll l = 0, r = m, ans = m;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (is_possible(c, m, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    std::cout << ans << "\n";
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
