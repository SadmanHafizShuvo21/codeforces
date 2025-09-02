#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n, a, b;
    std::cin >> n >> a >> b;

    std::set<ll> s;
    for (ll i = 0; i < b; i++) {
        ll x;
        std::cin >> x;
        s.insert(x);
    }

    for (ll i = 0; i < n; i++) {
        ll m;
        std::cin >> m;
        std::vector<ll> a(m);
        for (ll j = 0; j < m; j++) {
            std::cin >> a[j];
        }

        ll cnt = 0;
        for (ll x : a) {
            if (s.count(x)) {
                cnt++;
            }
        }

        // std::cout << m << " " << cnt << "\n";
        if (cnt > m / 3) {
            std::cout << i + 1 << "\n";
            return;
        }
    }

    std::cout << -1 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}