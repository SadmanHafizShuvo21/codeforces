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

    

    ll res = std::abs(pr[a].first - pr[b].first) + std::abs(pr[a].second - pr[b].second);

    ll mA = 1e15;
    ll mB = 1e15;

    for (int i = 0; i < k; i++) {
        mA = std::min(mA, std::abs(pr[a].first - pr[i].first) + std::abs(pr[a].second - pr[i].second));
        mB = std::min(mB, std::abs(pr[b].first - pr[i].first) + std::abs(pr[b].second - pr[i].second));
    }

    res = std::min(res, mA + mB);

    std::cout << res << "\n";
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
