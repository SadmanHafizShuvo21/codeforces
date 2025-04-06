#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<std::pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        int h = (a + k - 1) / k;
        int rem = a - (h - 1) * k;
        v[i] = {rem, i + 1};
    }

    std::sort(v.begin(), v.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
        if (a.first != b.first) {
            return a.first > b.first;
        }
        return a.second < b.second;
    });

    for (ll i = 0; i < n; i++) {
        std::cout << v[i].second << (i == n - 1 ? '\n' : ' ');
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
