#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(m);
    for (int i = 0; i < m; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        ll x = (i % 2 == 0 ? i / 2 : m - 1 - i / 2);
        ll y = m - 1 - x;
        for (int j = 0; j < 3; j++) {
            std::cout << a[x] << " " << a[y] << " \n"[j == 2];
        }
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
