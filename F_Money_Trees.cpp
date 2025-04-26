#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    ll k;
    std::cin >> n >> k;
    std::vector<int> a(n), h(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> h[i];
    }
    ll ans = 0, l = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (i > 0 && h[i-1] % h[i] != 0) {
            l = i;
            sum = 0;
        }
        sum += a[i];
        while (sum > k) {
            sum -= a[l];
            l++;
        }
        ans = std::max(ans, i - l + 1);
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
}
