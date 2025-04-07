#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x, y;
    std::cin >> n >> x >> y;

    ll pos = (n / x) - (n / std::lcm(x, y));
    ll neg = (n / y) - (n / std::lcm(x, y));

    ll sumMax = pos * (2 * n - pos + 1) / 2;
    ll sumMin = neg * (neg + 1) / 2;

    std::cout << sumMax - sumMin << "\n";
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
