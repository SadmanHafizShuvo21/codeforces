#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> p(n), a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    std::vector<std::priority_queue<std::pair<int, int>>> pq(4);
    for (int i = 0; i < n; i++) {
        pq[a[i]].push({-p[i], i});
        if (a[i] != b[i]) {
            pq[b[i]].push({-p[i], i});
        }
    }

    std::vector<bool> used(n, false);

    int m;
    std::cin >> m;
    while (m--) {
        int c;
        std::cin >> c;

        while (!pq[c].empty() && used[pq[c].top().second]) {
            pq[c].pop();
        }

        if (pq[c].empty()) {
            std::cout << -1 << ' ';
        } 
        else {
            int idx = pq[c].top().second;
            std::cout << -pq[c].top().first << ' ';
            used[idx] = true;
        }
    }

    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
