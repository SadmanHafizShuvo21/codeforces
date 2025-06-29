#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::vector<int> cnt(3, 0);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        cnt[a[i] % 3]++;
    }

    int tar = n / 3;
    int ans = 0;
    for (int l = 0; l < 2; l++) {
        for (int i = 0; i < 3; i++) {
            if (cnt[i] > tar) {
                int x = cnt[i] - tar;
                cnt[i] -= x;
                cnt[(i + 1) % 3] += x;
                ans += x;
            }
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
}
