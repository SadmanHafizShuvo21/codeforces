#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> l(n), r(n);
    for (int i = 0; i < n; i++) {
        std::cin >> l[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> r[i];
    }

    std::vector<int> a(n);
    ll ans = 0;
    
    for (int i = 0; i < n; i++) {
        a[i] = std::min(l[i], r[i]);
        ans += std::max(l[i],r[i]);
    }

    std::sort(a.begin(),a.end(),std::greater<ll>());
    for (int i = 0; i < k - 1; i++) {
        ans += a[i];
    }
    std::cout << ans + 1 << '\n';
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
