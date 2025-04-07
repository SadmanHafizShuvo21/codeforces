#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> c(n);
    for (int i = 0; i < n; i++) {
        std::cin >> c[i];
    }

    bool ok = false;
    ll x = 0;
    ll y = std::count(c.begin(), c.end(), c[n - 1]);

    if (c[0] == c[n - 1]) {
        if (y >= k) {
            std::cout<<"YES"<<"\n";
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        x += (c[i] == c[0]);
        y -= (c[i] == c[n - 1]);
        if (x >= k && y >= k) {
            ok = true;
            break;
        }
    }

    std::cout << (ok ? "YES" : "NO") << "\n";
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

