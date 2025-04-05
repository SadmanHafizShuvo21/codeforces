#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
    }

    std::vector<std::pair<int, int>> operations;
    bool possible = true;

    for (int i = 0; i < n; ++i) {
        if (a[i] != b[n - 1 - i]) {
            bool found = false;
            for (int j = i + 1; j < n; ++j) {
                if (a[j] == b[n - 1 - i]) {
                    std::swap(a[i], a[j]);
                    std::swap(b[i], b[j]);
                    operations.push_back({i + 1, j + 1});
                    found = true;
                    break;
                }
            }

            if (!found) {
                possible = false;
                break;
            }
        }
    }
    
    if (possible) {
        std::cout << operations.size() << '\n';
        for (const auto &op : operations) {
            std::cout << op.first << ' ' << op.second << '\n';
        }
    } 
    else {
        std::cout << -1 << '\n';
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
