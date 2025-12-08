#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    ll n, l, r;
    std::cin >> n >> l >> r;
    std::vector<ll> a(n + 1);
    std::iota(a.begin(), a.end(), 0);
    a[r] = l - 1;
    
    for (int i = 1; i <= n; i++) {
        std::cout << (a[i] ^ a[i - 1]) << " \n"[i == n];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}
