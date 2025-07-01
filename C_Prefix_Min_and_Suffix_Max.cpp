#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<int> pmin(n);
    pmin[0] = a[0];
    for (int i = 1; i < n; i++) {
        pmin[i] = std::min(pmin[i-1], a[i]);
    }

    std::vector<int> smax(n);
    smax[n-1] = a[n-1];
    for (int i = n-2; i >= 0; i--) {
        smax[i] = std::max(smax[i+1], a[i]);
    }

    std::string ans(n, '0');
    for (int i = 0; i < n; i++) {
        if (a[i] == pmin[i] || a[i] == smax[i]) {
            ans[i] = '1';
        }
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
    return 0;
}