#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    int maxa = 0;
    for (int x : a) {
        if (maxa < m && x >= b[maxa]) {
            maxa++;
        }
    }
    if (maxa == m) {
        std::cout << 0 << '\n';
        return;
    }

    std::vector<int> left(m + 1, n + 1);
    left[0] = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (j < m && a[i] >= b[j]) {
            j++;
            left[j] = i + 1;
        }
    }

    std::vector<int> right(m, -1);
    j = m - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (j >= 0 && a[i] >= b[j]) {
            right[j] = i;
            j--;
        }
    }

    int ans = 2e9;
    for (int k = 0; k < m; k++) {
        if (left[k] > n) {
            continue;
        }
        if (k + 1 <= m - 1) {
            if (right[k + 1] == -1 || left[k] > right[k + 1]) {
                continue;
            }
        }
        ans = std::min(ans, b[k]);
    }

    if(ans >= 2e9){
        ans = -1;
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
