#include <bits/stdc++.h>
using ll = long long;
constexpr int inf = 1E9 + 7;

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
    std::sort(b.begin(), b.end());
    
    int last = -inf;
    for (int i = 0; i < n; i++) {
        int x = inf;
        if (a[i] >= last) {
            x = a[i];
        }
        auto it = std::lower_bound(b.begin(), b.end(), last + a[i]);
        if (it != b.end()) {
            x = std::min(x, *it - a[i]);
        }
        if (x == inf) {
            std::cout << "NO" << "\n";
            return;
        }
        last = x;
    }
    std::cout << "YES" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}