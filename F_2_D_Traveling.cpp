#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k, a, b;
    std::cin >> n >> k >> a >> b;
    a--; b--;

    std::vector<std::pair<ll, ll>> pr(n);
    for (int i = 0; i < n; i++) {
        ll x , y;
        std::cin >> x >> y;
        pr[i]={x,y};
    }

    ll x = 1e18;
    ll y = 1e18;
    ll ans = std::abs(pr[a].first - pr[b].first) + std::abs(pr[a].second - pr[b].second);
    for (int i = 0; i < k; i++) {
        x = std::min(x, std::abs(pr[a].first - pr[i].first) + std::abs(pr[a].second - pr[i].second));
        y = std::min(y, std::abs(pr[b].first - pr[i].first) + std::abs(pr[b].second - pr[i].second));
    }

    ans = std::min(ans, x + y);

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
