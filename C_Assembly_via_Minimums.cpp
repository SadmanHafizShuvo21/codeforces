#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    int sz = n * (n - 1) / 2;
    std::vector<int> b(sz);
    for (int i = 0; i < sz; i++) {
        std::cin >> b[i];
    }

    std::sort(b.begin(), b.end());

    std::vector<int> a;
    int idx = 0, count = n - 1;

    for (int i = 0; i < n - 1; i++) {
        a.push_back(b[idx]);
        idx += count--;
    }
    a.push_back(1e9); 

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " \n"[i == n - 1];
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
