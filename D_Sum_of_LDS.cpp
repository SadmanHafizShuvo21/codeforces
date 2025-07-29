#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0, cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (i + 1 < n && a[i] > a[i + 1]) {
            cnt += (n - i);
        }
        else {
            cnt++;
        }
        // std::cout << cnt << " ";
        ans += cnt;
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
