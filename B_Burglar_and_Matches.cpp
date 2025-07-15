#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::pair<ll, ll>> v(m);

    for (int i = 0; i < m; i++) {
        std::cin >> v[i].first >> v[i].second;
    }

    std::sort(v.begin(), v.end(), [](auto &x, auto &y) {
        return x.second > y.second;
    });

    ll ans = 0;
    for (int i = 0; i < m; i++) {
        ll mn = std::min(n, v[i].first);
        ans += mn * v[i].second;
        n -= mn;
        if (n == 0) {
            break;
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}