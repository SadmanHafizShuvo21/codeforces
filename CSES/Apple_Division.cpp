#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll ans = LLONG_MAX;

    for(int i = 0; i < (1 << n); i++) {
        ll x = 0;
        for(int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                x += a[j];
            }
        }
        ans = std::min(ans, std::abs(sum - 2 * x));
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}