#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    bool ok = false;
    std::set<int> s;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            ok = true;
        }
        else if (a[i] != -1) {
            s.insert(a[i]);
        }
    }

    std::cout << (ok ? "NO" : (s.size() <= 1 ? "YES" : "NO")) << "\n";
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
