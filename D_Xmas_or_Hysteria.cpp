#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if ((m == n && n >= 2) || m == n - 1) {
        std::cout << -1 << "\n";
        return;
    }

    std::vector<std::pair<ll, ll>> v;
    for (int i = 0; i < n; i++) {
        v.push_back({a[i], i + 1});
    }

    std::sort(v.begin(), v.end());
    std::vector<std::pair<ll, ll>> ans;

    ll k = n - m, idx = 0;
    while (k >= 2) {
        ans.push_back({v[idx].second, v[idx + 1].second});
        idx += 2;
        k -= 2;
    }

    if (k == 1) {
        ans.push_back({v[idx].second, v.back().second});
        idx++;
    }

    ll st = idx;
    if (m >= 2) {
        for (int i = st; i + 1 < n; i++) {
            ans.push_back({v[i].second, v[i + 1].second});
        }
    }

    std::cout << ans.size() << "\n";
    for (auto &p : ans) {
        std::cout << p.first << " " << p.second << "\n";
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
    // solve();
}
