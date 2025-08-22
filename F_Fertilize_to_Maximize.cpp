#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
const int MOD = 1e9 + 7;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> s(n), t(n);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }
    for (int i = 0; i < n; i++) { 
        std::cin >> t[i];
    }

    ld sum = 0.0;
    for (int i = 0; i < n; i++) {
        ll x = t[i] - s[i] + 1;
        sum += 1.0L / (ld)x;
    }
    std::cout << std::fixed << std::setprecision(10) << sum / (ld)n << "\n";
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
