#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 1e18;
    int cnt = 0;
    while (cnt < n) {
      int l = cnt;
      while (l + 1 < n && a[l + 1] == a[l]) {
        l++;
      }
      int len = l - cnt + 1;
      ll cur = ll(n - len) * a[cnt];
      ans = std::min(ans, cur);
      cnt = l + 1;
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
