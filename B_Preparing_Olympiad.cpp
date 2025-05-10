#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, l, r, x;
    std::cin >> n >> l >> r >> x;

    std::vector<ll> c(n);
    for (int i = 0; i < n; i++) {
        std::cin >> c[i];
    }

    ll ans = 0;
    for (int i = 0; i < (1 << n); i++) {
        ll sum = 0;
        std::vector<int> v;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                v.push_back(c[j]);
                sum += c[j];
            }
        }
        
        if (v.size() < 2) {
            continue;
        }

        ll mn = *std::min_element(v.begin(), v.end());
        ll mx = *std::max_element(v.begin(), v.end());

        if (sum >= l && sum <= r && (mx - mn) >= x) {
            ans++;
        }
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
