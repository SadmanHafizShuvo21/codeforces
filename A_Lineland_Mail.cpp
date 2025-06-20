#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> x(n);
    for (int i = 0; i < n; i++) {
        std::cin >> x[i];
    }

    ll mn, mx;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            mn = std::abs(x[i + 1] - x[i]);
            mx = std::abs(x[n - 1] - x[i]);
        } 
        else if (i == n - 1) {
            mn = std::abs(x[i] - x[i - 1]);
            mx = std::abs(x[i] - x[0]);
        } 
        else {
            mn = std::min(std::abs(x[i] - x[i - 1]), std::abs(x[i + 1] - x[i]));
            mx = std::max(std::abs(x[i] - x[0]), std::abs(x[n - 1] - x[i]));
        }
        std::cout << mn << ' ' << mx << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
