#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    ll r = m % n;

    if (r == 0) {
        for (int i = 1; i <= n; i++) {
            std::cout << i << " \n"[i == n];
        }
        return;
    }

    for (int i = n; i >= n - r + 1; i--) {
        std::cout << i << ' ';
    }
    for (int i = 1; i <= n - r; i++) {
        std::cout << i << " \n"[i == n - r];
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
