#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = std::accumulate(a.begin(), a.end(), 0LL);
    for (int i = 0; (1LL << i) <= n; i++) {
        ll l = 1LL << i;
        std::vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = ((a[i] & l) ? -l : l);
        }

        ll cur = std::accumulate(v.begin(), v.begin() + l, 0LL);
        ll best = cur;
        for (int i = l; i < n; i++) {
            cur += v[i] - v[i - l];
            if (cur < best) {
                best = cur;
            }
        }

        if (best < 0) {
            ans += best;
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
