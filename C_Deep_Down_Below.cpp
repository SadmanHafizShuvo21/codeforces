#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::pair<ll, ll>> pr(n);
    for (int i = 0; i < n; i++) {
        ll k;
        std::cin >> k;
        ll x;
        std::cin >> x;
        for (int j = 1; j < k; j++) {
            ll a;
            std::cin >> a;
            x = std::max(x, a - j);
        }
        pr[i] = {x, k};
    }
    std::sort(pr.begin(), pr.end());

    ll cur = pr[0].second;
    ll ans = pr[0].first;
    for (int i = 1; i < n; i++) {
        ans = std::max(ans, pr[i].first - cur);
        cur += pr[i].second;
    }
    
    std::cout << ans + 1 << "\n";
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