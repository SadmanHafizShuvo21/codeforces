#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, x;
    std::cin >> n >> x;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int k;
    std::cin >> k;
    std::set<int> s;
    for (int i = 0; i < k; i++) {
        int b;
        std::cin >> b;
        s.insert(b);
    }

    int bad = 0;
    for (int i = 0; i < n; i++) {
        if (!s.count(i + 1)) {
            bad += a[i];
        }
    }

    std::cout << bad + 1 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
