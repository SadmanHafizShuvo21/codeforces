#include <bits/stdc++.h>
using ll = long long;
const ll inf = 1e18;
void solve() {
    ll n, t;
    std::cin >> n >> t;

    std::vector<std::pair<ll, ll>> pr(n);
    for(int i = 0; i < n; i++) {
        std::cin >> pr[i].first >> pr[i].second;
    }
    std::sort(pr.begin(), pr.end());

    ll ans = pr[0].first, cur = pr[0].second;
    for(int i = 1; i < n; i++) {
        if (pr[i].first > cur) {
            ans = std::max(ans, pr[i].first - pr[i - 1].second);
        }
        cur = std::max(cur, pr[i].second);
    }

    if (cur < t) {
        ans = std::max(ans, t - cur);
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
