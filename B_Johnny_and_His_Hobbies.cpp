#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());
    for(int i = 1; i <= 1024; i++) {
        bool ok = true;
        for (auto x : a) {
            if (!std::binary_search(a.begin(), a.end(), x ^ i)) {
                ok = false;
            }
        }
        if (ok) {
            std::cout << i << "\n";
            return;
        }
    }
    std::cout << -1 << "\n";
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
