#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, s;
    std::cin >> n >> s;
    std::vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    ll mn = std::min(s, *std::min_element(v.begin(), v.end()));
    ll mx = std::max(s, *std::max_element(v.begin(), v.end()));

    std::cout << std::min(s - mn, mx - s) + mx - mn << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t; std::cin >> t;
    while (t--) {
        solve();
    }
}
