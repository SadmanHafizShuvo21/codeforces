#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n), b(n), p(n), ia(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i]--;
        ia[a[i]] = i;
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
        b[i]--;
        p[a[i]] = b[i];
    }

    // Count invalid mappings (more than one improper cycle)
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] == i || p[p[i]] != i) {
            cnt++;
        }
    }

    if (cnt > 1) {
        std::cout << -1 << "\n";
        return;
    }

    std::vector<int> q(n);
    for (int i = 0, l = 0, r = n - 1; i < n; i++) {
        if (p[i] == i) {
            q[ia[i]] = n / 2;
        } else if (p[i] > i) {
            q[ia[i]] = l++;
            q[ia[p[i]]] = r--;
        }
    }

    std::vector<std::array<int, 2>> ans;
    for (int i = 0; i < n; i++) {
        while (q[i] != i) {
            ans.push_back({i, q[i]});
            std::swap(q[i], q[q[i]]);
        }
    }

    std::cout << ans.size() << "\n";
    for (auto [x, y] : ans) {
        std::cout << x + 1 << " " << y + 1 << "\n";
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

    return 0;
}
