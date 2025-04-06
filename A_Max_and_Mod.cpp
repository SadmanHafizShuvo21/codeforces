#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "-1\n";
        return;
    }

    std::vector<int> p(n);
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }
    std::rotate(p.begin(), p.end() - 1, p.end());

    for (int i = 0; i < n; i++) {
        std::cout << p[i] << " \n"[i == n - 1];
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
