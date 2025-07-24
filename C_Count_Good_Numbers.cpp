#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll l, r;
    std::cin >> l >> r;
    const std::vector<ll> v = {2, 3, 5, 7};
    ll tsum = r - l + 1;
    ll sum = 0;
    for (int j = 1; j < (1 << v.size()); j++) {
        ll x = 1;
        int s = -1;
        for (int i = 0; i < v.size(); i++) {
            if (j & (1 << i)) {
                x = std::lcm(x, v[i]);
                s = -s;
            }
        }
        sum += s * (r / x - (l - 1) / x);
    }
    std::cout << tsum - sum << "\n";
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