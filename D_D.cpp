#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<std::pair<ll,ll>> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i].first >> a[i].second;
    }
    std::sort(a.begin(), a.end(), [](auto &x, auto &y) {
        if (x.first != y.first) {
            return x.first > y.first;
        }
        return x.second < y.second;
    });

    auto x = a[k-1];
    ll ans = 0;
    for (auto &p : a) {
        ans += (p == x);
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
