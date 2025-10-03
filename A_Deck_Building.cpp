#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    std::vector<ll> sum(n);
    for (int i = 0; i < n; i++) {
        sum[i] = a[i] + b[i];
    }
    std::sort(sum.begin(), sum.end());
    ll ans = std::accumulate(sum.begin(), sum.begin() + 4, 0LL);
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
