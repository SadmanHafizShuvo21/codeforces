#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    n = std::unique(a.begin(), a.end()) - a.begin();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1 || ((a[i] > a[i - 1]) == (a[i] > a[i + 1]))) {
            ans++;
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
