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

    ll ans = pr[0].first;
    for(int i = 1; i < n; i++) {
        ans = std::max(ans, pr[i].first - pr[i - 1].second);
    }
    ans = std::max(ans, t - pr[n - 1].second);
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
