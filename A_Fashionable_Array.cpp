#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    
    ll l = 0, r = n - 1;
    while ((a[l] + a[r]) % 2 != 0) {
        l++;
    }
    while ((a[0] + a[r]) % 2 != 0) {
        r--;
    }
    std::cout << std::min(l, n - r - 1) << '\n';
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
