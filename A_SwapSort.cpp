#include <bits/stdc++.h>
using ll = long long;
const ll inf = -1e18;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (std::is_sorted(a.begin(), a.end())) {
        std::cout << 0 << "\n";
        return;
    }

    std::vector<std::pair<ll, ll>> pr;
    ll cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        ll idx = std::min_element(a.begin() + i, a.end()) - a.begin();
        
        if (idx != i) {
            pr.push_back({i, idx});
            std::swap(a[i], a[idx]);
            cnt++;
        }
    }

    std::cout << cnt << "\n";
    for (int i = 0; i < cnt; i++) {
        std::cout << pr[i].first << " " << pr[i].second << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
