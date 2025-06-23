#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    ll ans = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            ll sum = a[i] + a[j];
            
            int upper = upper_bound(a.begin() + j + 1, a.end(), sum - 1) - a.begin();
            int lower = lower_bound(a.begin() + j + 1, a.end(), a[n - 1] - sum + 1) - a.begin();
            ans += std::max(upper - lower, 0);
        }
    }

    std::cout << ans << "\n";
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