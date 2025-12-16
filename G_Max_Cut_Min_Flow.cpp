#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, b;
    std::cin >> n >> b;
    n--;

    ll sum = 0, mincost = inf;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        sum += (x >= 0 ? x : 0);
        mincost = std::min(mincost, (x < 0 ? -1 : 0) * x);
    }

    if (sum > 0) {
        std::cout << sum + b << "\n";
        return;
    }

    if (mincost <= b) {
        std::cout << b - mincost << "\n";
        return;
    }
    std::cout << -1 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}
