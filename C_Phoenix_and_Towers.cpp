#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, x;
    std::cin >> n >> m >> x;
    std::vector<ll> h(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> h[i];
    }

    std::set<std::pair<ll, ll>> s;
    for (ll i = 0; i < m; i++) {
        s.insert({0, i});
    }

    std::vector<ll> p(n);
    for (ll i = 0; i < n; i++) {
        auto e = *s.begin();
        s.erase(s.begin());
        p[i] = e.second;
        s.emplace(e.first + h[i], e.second);
    }

    std::cout << "YES" << "\n";
    for (ll i = 0; i < n; i++) {
        std::cout << p[i] + 1 << " \n"[i == n - 1];
    }
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
