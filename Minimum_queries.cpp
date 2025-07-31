#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, q;
    std::cin >> n >> q;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    while (q--) {
        int l, r;
        std::cin >> l >> r;
        l--;
        r--; 
        std::cout << *std::min_element(a.begin() + l, a.begin() + r + 1) << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
