#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, p;
    std::cin >> n >> p;
    std::vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    std::vector<bool> info(n, false);
    std::vector<int> idx(n);
    std::iota(idx.begin(), idx.end(), 0);
    std::sort(idx.begin(), idx.end(), [&](int i, int j) {
        return b[i] < b[j];
    });

    ll total = p;
    ll k = n - 1;
    for (auto i : idx) {
        while (k > 0 && a[i] > 0) {
            a[i]--, k--;
            total += std::min(p, b[i]);
        }
    }
    std::cout << total << '\n';
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
