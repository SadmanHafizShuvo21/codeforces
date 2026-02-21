// 21 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, d;
    std::cin >> n >> d;
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    std::deque<std::pair<ll, ll>> q; 
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            q.emplace_back(i, a[i]);
        }

        ll need = b[i];
        while (need > 0) {
            auto &x = q.front();
            ll tk = std::min(x.second, need);
            x.second -= tk;
            need -= tk;
            if (x.second == 0) {
                q.pop_front();
            }
        }

        while (!q.empty() && q.front().first <= i - d) {
            q.pop_front();
        }
    }

    ll ans = 0;
    for (auto x : q) {
        ans += x.second;
    }

    std::cout << ans << '\n';
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