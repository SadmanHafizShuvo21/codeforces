#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> cnt(30, 0);
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < 30; j++) {
            if (a[i] & (1 << j)) {
                cnt[j]++;
            }
        }
    }

    ll max_sum = 0;
    for (ll i = 0; i < n; i++) {
        ll sum = 0;
        for (ll j = 0; j < 30; j++) {
            if (a[i] & (1 << j)) {
                sum += (n - cnt[j]) * (1LL << j);
            } 
            else {
                sum += cnt[j] * (1LL << j);
            }
        }
        max_sum = std::max(max_sum, sum);
    }

    std::cout << max_sum << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
