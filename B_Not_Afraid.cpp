#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;

    while (m--) {
        int k;
        std::cin >> k;

        std::vector<int> v(k);
        std::set<int> group;

        for (int i = 0; i < k; i++) {
            std::cin >> v[i];
            group.insert(v[i]);
        }

        // For each unique universe in the group
        bool safe = false;
        int index=-1;
        for (int i = 1; i <= n; i++) {
            if (group.count(i) && group.count(-i)) {
                safe = true;
                break;
            }
        }
        if (!safe) {
            std::cout << "YES" << "\n";
            return;
        }
    }

    std::cout << "NO" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
