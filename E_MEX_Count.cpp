#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<int> freq(n + 1, 0);
    for (int i = 0; i < n; i++) {
        if (a[i] <= n) {
            freq[a[i]]++;
        }
    }

    int m_max = 0;
    while (freq[m_max] > 0) {
        m_max++;
    }

    std::vector<ll> ans(n + 2, 0);
    for (int i = m_max; i >= 0; i--) {
        ans[freq[i]]++;
        int hi = n - i;
        if (hi + 1 <= n) {
            ans[hi + 1]--;
        }
    }

    for (int i = 1; i <= n; i++) {
        ans[i] += ans[i - 1];
    }

    for (int k = 0; k <= n; k++) {
        std::cout << ans[k] << " \n"[k == n];
    }
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