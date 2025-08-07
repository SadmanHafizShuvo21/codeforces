#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    ll s = 0;
    std::vector<std::pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++) {
        ll l = std::min(a[i], b[i]);
        ll r = std::max(a[i], b[i]);
        s += r - l;
        v[i] = {l, r};
    }

    std::sort(v.begin(), v.end());
    std::vector<std::pair<ll, ll>> m;
    ll l = v[0].first, r = v[0].second;
    for (int i = 1; i < n; i++) {
        if (v[i].first <= r) {
            r = std::max(r, v[i].second);
        }
        else {
            m.emplace_back(l, r);
            l = v[i].first;
            r = v[i].second;
        }
    }
    m.emplace_back(l, r);

    int z = n - m.size();
    if (k <= z) {
        std::cout << s << "\n";
        return;
    }

    std::vector<ll> g;
    for (int i = 0; i + 1 < m.size(); i++) {
        g.push_back(2 * (m[i + 1].first - m[i].second));
    }

    std::sort(g.begin(), g.end());
    ll add = 0;
    for (int i = 0; i < k - z && i < g.size(); i++) {
        add += g[i];
    }

    std::cout << s + add << "\n";
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
